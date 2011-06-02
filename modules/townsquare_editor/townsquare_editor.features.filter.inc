<?php
/**
 * @file
 * townsquare_editor.features.filter.inc
 */

/**
 * Implementation of hook_filter_default_formats().
 */
function townsquare_editor_filter_default_formats() {
  $formats = array();

  // Exported format: WYSIWYG Markdown
  $formats['wysiwyg_markdown'] = array(
    'format' => 'wysiwyg_markdown',
    'name' => 'WYSIWYG Markdown',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_markdown' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'htmlpurifier_basic' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => '0',
            'AutoFormat.AutoParagraph' => '0',
            'AutoFormat.Linkify' => '0',
            'AutoFormat.RemoveEmpty' => '1',
            'HTML.Allowed' => '*[class],
  a[href],
  div,p,pre,table,thead,tbody,tr,th,td,h2,h3,h4,h5,h6,
  img[src|title|alt|width|height],
  br,span,em,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd',
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => '0',
            'Output.FlashCompat' => '0',
            'URI.DisableExternalResources' => '0',
            'URI.DisableResources' => '0',
            'Null_URI.Munge' => '1',
          ),
        ),
      ),
      'oembed' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(
          'oembed_maxwidth' => '',
          'oembed_maxheight' => '',
        ),
      ),
      'pathologic' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'absolute' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
