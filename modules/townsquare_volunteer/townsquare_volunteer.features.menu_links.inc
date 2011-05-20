<?php
/**
 * @file
 * townsquare_volunteer.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function townsquare_volunteer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:volunteers
  $menu_links['menu-townsquare-toolbar:volunteers'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'volunteers',
    'router_path' => 'volunteers',
    'link_title' => 'Volunteers',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Volunteers');


  return $menu_links;
}
