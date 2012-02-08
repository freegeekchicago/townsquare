<?php
/**
 * @file
 * townsquare_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function townsquare_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-townsquare-toolbar
  $menus['menu-townsquare-toolbar'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'title' => 'Townsquare toolbar',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare toolbar');


  return $menus;
}
