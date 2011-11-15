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
      'htmLawed' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'htmLawed' => array(
            'config' => '\'safe\'=>1, \'elements\'=>\'p, blockquote, pre, a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
            'spec' => '',
            'help' => 'When WYSIWYG editor is disabled, use Markdown syntax.',
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
      'filter_markdown' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'htmLawed' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'htmLawed' => array(
            'config' => '\'safe\'=>1, \'elements\'=>\'div, p, pre, blockquote, span, table, thead, tbody, tr, th, td, h1, h2, h3, h4, h5, h6, hr, a, em, strong, cite, code, ol, ul, li, dl, dt, dd\', \'deny_attribute\'=>\'id, style\'',
            'spec' => '',
            'help' => 'Use Markdown when editor disabled.',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
