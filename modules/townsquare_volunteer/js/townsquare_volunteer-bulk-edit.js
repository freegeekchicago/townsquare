(function($) {
Drupal.behaviors.volunteerGrowTextarea = {
  attach: function(context) {
    $('.field-name-field-session-notes textarea', context).elastic();
    $('.field-name-field-event-description textarea', context).elastic();
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

// World's tiniest jQuery plugin to be invoked with Drupal AJAX command
$.fn.townsquareReplace = function(form) {
  $(this).each(function(i) {
    // Cache focused element
    var focused_elem = $('*:focus', this);

    // Replace markup
    $(this).replaceWith(form);

    // Find element with same name in replacement form
    $('*[name="'+ focused_elem.attr('name') +'"]', this).focus();
  });
}
})(jQuery);
