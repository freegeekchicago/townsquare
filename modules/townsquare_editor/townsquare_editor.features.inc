<?php
/**
 * @file
 * townsquare_editor.features.inc
 */

/**
 * Implementation of hook_default_wysiwyg_profile().
 */
function townsquare_editor_default_wysiwyg_profile() {
  $items = array();
  $items['wysiwyg_markdown'] = entity_import('wysiwyg_profile', '{
    "format" : "wysiwyg_markdown",
    "editor" : "tinymce",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "bold" : 1,
          "italic" : 1,
          "bullist" : 1,
          "numlist" : 1,
          "undo" : 1,
          "redo" : 1,
          "link" : 1,
          "unlink" : 1,
          "image" : 1
        },
        "font" : { "formatselect" : 1, "styleselect" : 1 },
        "inlinepopups" : { "inlinepopups" : 1 },
        "markdown" : { "markdown" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 0,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 0,
      "block_formats" : "p,address,pre,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    },
    "rdf_mapping" : []
  }');
  return $items;
}
