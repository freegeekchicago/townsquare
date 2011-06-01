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
            'HTML.Allowed' => 'a,p,blockquote,h2,h3,h4,h5,h6,div,span,table,tr,th,td,ul,ol,li',
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

  return $formats;
}
