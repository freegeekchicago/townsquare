(function($) {

Drupal.behaviors.dropdownForm = {
  attach: function(context) {
    $('.dropdown-menu').find('form').on('click', function(e) {
      e.stopPropagation();
    });
  }
};

})(jQuery);
