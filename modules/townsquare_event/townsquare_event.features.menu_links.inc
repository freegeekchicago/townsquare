<?php
/**
 * @file
 * townsquare_event.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function townsquare_event_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:events
  $menu_links['menu-townsquare-toolbar:events'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '14',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');


  return $menu_links;
}
