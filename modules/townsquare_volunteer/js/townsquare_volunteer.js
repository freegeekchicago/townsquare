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



})(jQuery);
