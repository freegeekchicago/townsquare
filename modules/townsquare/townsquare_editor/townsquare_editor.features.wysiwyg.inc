<?php
/**
 * @file
 * townsquare_editor.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function townsquare_editor_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: markdown
  $profiles['markdown'] = array(
    'format' => 'markdown',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'blockquote' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'inlinepopups' => array(
          'inlinepopups' => 1,
        ),
        'markdown' => array(
          'markdown' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'self',
      'css_path' => '%bprofiles/townsquare/themes/townsquare/css/editor.css',
      'css_classes' => '',
    ),
  );

  // Exported profile: markdown_advanced
  $profiles['markdown_advanced'] = array(
    'format' => 'markdown_advanced',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 1,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'blockquote' => 1,
          'removeformat' => 1,
        ),
        'fullscreen' => array(
          'fullscreen' => 1,
        ),
        'inlinepopups' => array(
          'inlinepopups' => 1,
        ),
        'markdown' => array(
          'markdown' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'self',
      'css_path' => '%bprofiles/townsquare/themes/townsquare/css/editor.css',
      'css_classes' => 'Big=big
  Small=small
  Serif=font_serif
  Highlight=highlight
  Align center=align-center
  Align right=align-right',
    ),
  );

  return $profiles;
}
