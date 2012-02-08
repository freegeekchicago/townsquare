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

  // Exported menu link: menu-townsquare-toolbar:event/create
  $menu_links['menu-townsquare-toolbar:event/create'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'event/create',
    'router_path' => 'event/create',
    'link_title' => '+',
    'options' => array(
      'attributes' => array(
        'title' => 'Create a new event and track participation.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-townsquare-toolbar:events
  $menu_links['menu-townsquare-toolbar:events'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
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
  t('+');
  t('Events');


  return $menu_links;
}
