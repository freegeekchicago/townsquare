<?php
/**
 * @file
 * townsquare_volunteer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function townsquare_volunteer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-townsquare-toolbar:admin/people/create
  $menu_links['menu-townsquare-toolbar:admin/people/create'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => '+',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new volunteer.',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '20',
  );
  // Exported menu link: menu-townsquare-toolbar:event
  $menu_links['menu-townsquare-toolbar:event'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '30',
  );
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
    'weight' => '40',
  );
  // Exported menu link: menu-townsquare-toolbar:volunteer
  $menu_links['menu-townsquare-toolbar:volunteer'] = array(
    'menu_name' => 'menu-townsquare-toolbar',
    'link_path' => 'volunteer',
    'router_path' => 'volunteer',
    'link_title' => 'Volunteers',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('+');
  t('Events');
  t('Volunteers');


  return $menu_links;
}
