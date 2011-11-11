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
  var hours = $('.form-item-field-session-hours-und-0-value, .form-item-field-session-hours-und-0-value2', form);
  var checkbox = $('input:checked', field).not(':disabled'); //.attr('checked');
  if (!checkbox.length) {
    duration.addClass('form-disabled');
    $('input', duration).attr('readonly', true);
    
    hours.removeClass('form-disabled');
    $('input', hours).removeAttr('readonly');
    $('button', hours).removeAttr('disabled');
  } else {
    duration.removeClass('form-disabled');
    $('input', duration).removeAttr('readonly');
    
    hours.addClass('form-disabled');
    $('input', hours).attr('readonly', true);
    $('button', hours).attr('disabled', true);
  }
}
})(jQuery);
