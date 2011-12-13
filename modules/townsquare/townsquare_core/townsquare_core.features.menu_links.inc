<?php
/**
 * @file
 * townsquare_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function townsquare_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:<front>
  $menu_links['menu-townsquare-toolbar:<front>'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');


  return $menu_links;
}
