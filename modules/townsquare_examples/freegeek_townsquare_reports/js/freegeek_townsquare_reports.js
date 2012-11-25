(function($) {

Drupal.behaviors.FreeGeekReport = {
  attach: function(context) {
    $('.table', context).tablechart({
      height: 350,
      plotOptions: {
        seriesColors: ['#2222cc', '#cc2222'],
        seriesDefaults: {
          renderer: $.jqplot.BarRenderer,
          rendererOptions: { 
            barPadding: 2,
            barMargin: 2
          }
        },
        axes: {
          xaxis: {
            tickRenderer: $.jqplot.CanvasAxisTickRenderer ,
            tickOptions: {
              angle: 90,
                fontSize: '10pt'
              }
          }
        }
      }
    });
  }
};

})(jQuery);
