(function($) {

Drupal.behaviors.volunteerGrowTextarea = {
  attach: function(context) {
    $('.field-name-field-session-notes textarea', context).elastic();
    $('.field-name-field-event-description textarea', context).elastic();
  }
};
Drupal.behaviors.volunteerExtendPage = {
  attach: function(context) {
    var adjusted = $('#volunteer-sessions').data('heightAdjusted');
    if (!adjusted) {
      $('#volunteer-sessions')
        .css('padding-bottom', $('#main-content').height())
        .data('heightAdjusted', true);
    }
  }
};
Drupal.behaviors.prepareVolunteerUI = {
  attach: function(context) {
    $('#volunteer-sessions input[value="Save"]').hide();
  }
};

// World's tiniest static jQuery plugin, to be invoked with Drupal AJAX command
$.fn.townsquareReplace = function() {
  $('.form-item-field-session-hours-und-0-value select', this).focus();
  $('.form-item-field-session-hours-und-0-value .chzn-container a', this).click();
}

})(jQuery);
