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
Drupal.behaviors.toggleFields = {
  attach: function(context) {
    $('.field-name-field-session-user input', context).each(function() {
      var form = $(this).parents('form');
      if (!this.value) {
        $('input[name!="field_session_user[und][0][target_id]"], textarea', form)
          .attr('readonly', true)
          .addClass('form-disabled');
        $('button', form)
          .attr('disabled', true)
          .addClass('form-disabled');
      }
      $(this).change(function() {
        $('input[name!="field_session_user[und][0][target_id]"], textarea', form)
          .removeAttr('readonly')
          .removeClass('form-disabled');
        $('button', form)
          .removeAttr('disabled')
          .removeClass('form-disabled');
      });
    });
  }
};


})(jQuery);
