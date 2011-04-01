<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function townsquare_event_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-townsquare-secondary-tools
  $menus['menu-townsquare-secondary-tools'] = array(
    'menu_name' => 'menu-townsquare-secondary-tools',
    'title' => 'Townsquare secondary toolbar',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Townsquare secondary toolbar');


  return $menus;
}
