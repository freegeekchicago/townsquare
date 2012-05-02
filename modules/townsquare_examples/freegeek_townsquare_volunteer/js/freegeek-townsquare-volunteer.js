(function($) {
Drupal.behaviors.hideMessages = {
  attach: function(context) {
    setInterval(function() { $('.messages.status').slideUp('1200'); }, 10000);
  }
};
})(jQuery);
