(function($) {

// Override time entry because of bugginess in date module
// @TODO: Ouch, this is ugly; needs a new home and approach.
$.fn.timeEntry = function() {
  return this;
}

Drupal.behaviors.volunteerGrowTextarea = {
  attach: function(context) {
    $('.field-name-field-session-notes textarea', context).elastic();
    $('.field-name-field-event-description textarea', context).elastic();
  }
};
Drupal.behaviors.volunteerExtendPage = {
  attach: function(context) {
    $('#volunteer-sessions').css('padding-bottom', $('#main-content').height());
  }
};
Drupal.behaviors.prepareVolunteerUI = {
  attach: function(context) {
    $('#volunteer-sessions input[value="Save"]').hide();
  }
};

// Focus selector
$.expr[':'].focus = function(a){ return (a == document.activeElement); }

// World's tiniest static jQuery plugin, to be invoked with Drupal AJAX command
$.fn.townsquareReplace = function(form) {
  // Cache focused element
  var focused_elem = $('*:focus', $('#volunteer-sessions'));

  // Create DOM node out of response
  var new_form = $(form);

  console.log(this.attr('id'));

  // Replace with new form
  if (this.attr('id') == 'volunteer-session-form-new') {
    this.replaceWith(new_form);
  }
  
  // Hide save buttons
  $('input[value="Save"]', new_form).hide();

  // Reattach behaviors on existing forms
  
  /*if (focused_elem.length > 0) {
    // Find element with same name as last focused element in replacement form
    var focused = $('*[name="'+ focused_elem.attr('name') +'"]', new_form)
      .focus();
  } else {
    // Otherwise, focus first date field (assumption is user *clicked* in
    // autocomplete suggestion box and so lost focus.
    $('.form-item-field-session-hours-und-0-value-time input', new_form).focus();
  }*/
}

Drupal.ajax.prototype.beforeSerialize = function (element, options) {
  // Allow detaching behaviors to update field values before collecting them.
  // This is only needed when field values are added to the POST data, so only
  // when there is a form such that this.form.ajaxSubmit() is used instead of
  // $.ajax(). When there is no form and $.ajax() is used, beforeSerialize()
  // isn't called, but don't rely on that: explicitly check this.form.
  if (this.form) {
    var settings = this.settings || Drupal.settings;
    Drupal.detachBehaviors(this.form, settings, 'serialize');
  }

  // Prevent duplicate HTML ids in the returned markup.
  // @see drupal_html_id()
  options.data['ajax_html_ids[]'] = [];
  $('[id]', $('#volunter-sessions')).each(function () {
    options.data['ajax_html_ids[]'].push(this.id);
  });

  // Allow Drupal to return new JavaScript and CSS files to load without
  // returning the ones already loaded.
  // @see ajax_base_page_theme()
  // @see drupal_get_css()
  // @see drupal_get_js()
  //options.data['ajax_page_state[theme]'] = Drupal.settings.ajaxPageState.theme;
  //options.data['ajax_page_state[theme_token]'] = Drupal.settings.ajaxPageState.theme_token;
  //for (var key in Drupal.settings.ajaxPageState.css) {
  //  options.data['ajax_page_state[css][' + key + ']'] = 1;
  //}
  for (var key in Drupal.settings.ajaxPageState.js) {
    options.data['ajax_page_state[js][' + key + ']'] = 1;
  }
}


})(jQuery);
