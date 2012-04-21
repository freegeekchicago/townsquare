<?php
/**
 * @file
 * townsquare_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function townsquare_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown restricted
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown restricted',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'pathologic' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'absolute' => 1,
        ),
      ),
      'htmlpurifier_basic' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => '0',
            'AutoFormat.AutoParagraph' => '0',
            'AutoFormat.Linkify' => '0',
            'AutoFormat.RemoveEmpty' => '0',
            'HTML.Allowed' => 'p,blockquote,pre,a,em,strong,cite,code,ol,ul,li,dl,dt,dd',
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
      'filter_markdown' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Markdown advanced
  $formats['markdown_advanced'] = array(
    'format' => 'markdown_advanced',
    'name' => 'Markdown advanced',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'pathologic' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'absolute' => 1,
        ),
      ),
      'filter_markdown' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'htmlpurifier_basic' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => '0',
            'AutoFormat.AutoParagraph' => '0',
            'AutoFormat.Linkify' => '0',
            'AutoFormat.RemoveEmpty' => '1',
            'HTML.Allowed' => '*[class],div,p,pre,blockquote,span,table,thead,tbody,tr,th,td,h1,h2,h3,h4, h5,h6,hr,a[href],img[src|width|height|alt],em,strong,i,b,cite,code,ol,ul,li,dl,dt,dd',
            'HTML.ForbiddenAttributes' => 'style',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => '0',
            'Output.FlashCompat' => '0',
            'URI.DisableExternalResources' => '0',
            'URI.DisableResources' => '0',
            'Null_URI.Munge' => '1',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
