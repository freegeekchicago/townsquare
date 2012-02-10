(function($) {

// Hide save buttons
Drupal.behaviors.prepareVolunteerUI = {
  attach: function(context) {
    $('#volunteer-sessions input[value="Save"]').hide();
  }
};

// jQuery plugin to invoke from AJAX callback
$.fn.scrollSessions = function() {
  $.scrollTo( this, 400, {offset: -50} );
  return this;
}

// Toggle fields
Drupal.behaviors.toggleFields = {
  attach: function(context) {
    $('.field-name-field-session-user input', context).each(function() {
      var form = $(this).parents('form');
      if (!this.value) {
        $('input[name!="field_session_user[und][0][target_id]"], select, textarea', form)
          .not(':checkbox')
          .not(':submit')
          .attr('readonly', true);
        
        $('input:checkbox, input:submit, button', form)
          .attr('disabled', true);
      }
      $(this).change(function() {
        $('input, select, textarea', form)
        .not('name="field_session_user[und][0][target_id]"')
        .not(':checkbox')
        .not(':submit')
        .removeAttr('readonly');

        $('input:checkbox, input:submit, button', form)
          .removeAttr('disabled');
      });
    });
  }
};

// Disable duration field if override button isn't checked
Drupal.behaviors.disableDuration = {
  attach: function(context) {
    $('.field-name-field-session-override-duration', context)
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
