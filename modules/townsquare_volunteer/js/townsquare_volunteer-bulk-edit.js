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
Drupal.behaviors.autosaveSessions = {
  attach: function(context) {
    $('.volunteer-session-form input[value="Save"]').hide();
    $('.volunteer-session-form input, .volunteer-session-form select, .volunteer-session-form textarea').change(function(e) {
      var parent_wrapper = $(this).parents('.volunteer-session-form');
      var user = $('.field-name-field-session-user input', parent_wrapper);
      if (user.val()) {
        $('input[value="Save"]', parent_wrapper).trigger('mousedown');
      }
    });
  }
};

// Focus selector
$.expr[':'].focus = function(a){ return (a == document.activeElement); }

// World's tiniest static jQuery plugin, to be invoked with Drupal AJAX command
$.fn.townsquareReplace = function(form) {
  // Cache focused element
  var focused_elem = $('*:focus', this);

  // Create DOM node out of response
  var new_form = $(form);

  // Replace with new form
  $(this).replaceWith(new_form);
  
  // Hide save buttons
  $('input[value="Save"]', new_form).hide();

  // Reattach behaviors on existing forms
  Drupal.attachBehaviors($(new_form));
  
  if (focused_elem.length > 0) {
    // Find element with same name as last focused element in replacement form
    var focused = $('*[name="'+ focused_elem.attr('name') +'"]', new_form)
      .focus();
  } else {
    // Otherwise, focus first date field (assumption is user *clicked* in
    // autocomplete suggestion box and so lost focus.
    $('.form-item-field-session-hours-und-0-value-time input', new_form).focus();
  }
}
})(jQuery);
