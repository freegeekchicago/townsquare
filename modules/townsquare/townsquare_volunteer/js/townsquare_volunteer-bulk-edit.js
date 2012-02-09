(function($) {

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


})(jQuery);
