(function($) {

// Disable duration field if override button isn't checked
Drupal.behaviors.disableDuration = {
  attach: function(context) {
    $('.field-name-field-session-override-duration')
      .each(function(i) {
        var field = this;
        TownsquareVolunteer.toggleDuration(field);
        $(field).click(function(e) {
          TownsquareVolunteer.toggleDuration(field);
        });
      })
  }
};

TownsquareVolunteer = {}
TownsquareVolunteer.toggleDuration = function(field) {
  var form = $(field).parents('form');
  var duration = $('.field-name-field-session-duration', form);
  var hours = $('.form-item-field-session-hours-und-0-value-time, .form-item-field-session-hours-und-0-value-date, .form-item-field-session-hours-und-0-value2-time, .form-item-field-session-hours-und-0-value2-date', form);
  var disabled = $('input', field).attr('checked');

  if (!disabled) {
    duration.addClass('form-disabled');
    $('input', duration).attr('readonly', true);
    
    hours.removeClass('form-disabled');
    $('input', hours).removeAttr('readonly');
  } else {
    duration.removeClass('form-disabled');
    $('input', duration).removeAttr('readonly');
    
    hours.addClass('form-disabled');
    $('input', hours).attr('readonly', true);
  }
}
})(jQuery);
