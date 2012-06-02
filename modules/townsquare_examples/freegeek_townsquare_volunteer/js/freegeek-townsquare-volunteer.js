(function($) {

Drupal.behaviors.hideMessages = {
  attach: function(context) {
    setInterval(function() { $('.messages.status').slideUp('1200'); }, 6000);
  }
};

Drupal.behaviors.focusName = {
  attach: function(context) {
    $('#edit-name').focus();
  }
};

})(jQuery);
