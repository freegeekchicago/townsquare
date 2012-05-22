<?php
/**
 * @file
 * townsquare_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function townsquare_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function townsquare_core_fontyourface_features_default_font() {
  return array(
    'PT Sans bold (latin)' => array(
      'name' => 'PT Sans bold (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=PT Sans&subset=latin#bold',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6, .biggest',
      'css_family' => 'PT Sans',
      'css_style' => 'normal',
      'css_weight' => 'bold',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:12:"PT Sans:bold";s:6:"subset";s:5:"latin";}',
    ),
    'PT Sans bolditalic (latin)' => array(
      'name' => 'PT Sans bolditalic (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=PT Sans&subset=latin#bolditalic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'PT Sans',
      'css_style' => 'italic',
      'css_weight' => 'bold',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:18:"PT Sans:bolditalic";s:6:"subset";s:5:"latin";}',
    ),
    'PT Sans italic (latin)' => array(
      'name' => 'PT Sans italic (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=PT Sans&subset=latin#italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'PT Sans',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:14:"PT Sans:italic";s:6:"subset";s:5:"latin";}',
    ),
    'PT Sans regular (latin)' => array(
      'name' => 'PT Sans regular (latin)',
      'enabled' => '1',
      'url' => 'http://www.google.com/webfonts/family?family=PT Sans&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '#main-content ul, #main-content table, #main-content blockquote, #main-content p, #footer',
      'css_family' => 'PT Sans',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"PT Sans:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_node_info().
 */
function townsquare_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A site-related page, such as an about page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
