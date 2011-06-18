(function($) {
Drupal.behaviors.disableDuration = {
  attach: function(context) {
    TownsquareVolunteer.toggleDuration(context, $('#edit-field-session-calculate-duration-und').attr('checked'));
    $('#edit-field-session-calculate-duration-und', context).click(function(e) {
      TownsquareVolunteer.toggleDuration(context, $(this).attr('checked'), true);
    });
  }
};
TownsquareVolunteer = {}
TownsquareVolunteer.toggleDuration = function(context, disabled, effect) {
  var duration = $('#edit-field-session-duration', context);
  if (!disabled) {
    duration.addClass('form-disabled');
    if (effect) {
      duration.slideUp('fast');
    } else {
      duration.hide();
    }
    $('input', duration).attr('disabled', true);
  } else {
    duration.removeClass('form-disabled');
    if (effect) {
      duration.slideDown('fast');
    } else {
      duration.show();
    }
    $('input', duration).removeAttr('disabled');
  }
}
})(jQuery);
