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

  // Exported menu link: main-menu:event
  $menu_links['main-menu:event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => '<i class="icon-flag"></i>Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:event/create
  $menu_links['main-menu:event/create'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'event/create',
    'router_path' => 'event/create',
    'link_title' => '<i class="icon-plus-sign"></i>New event',
    'options' => array(
      'attributes' => array(
        'title' => 'Create event',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:volunteer
  $menu_links['main-menu:volunteer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'volunteer',
    'router_path' => 'volunteer',
    'link_title' => '<i class="icon-user"></i>Volunteers',
    'options' => array(
      'attributes' => array(
        'title' => 'Search volunteers, view reports',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<i class="icon-flag"></i>Events');
  t('<i class="icon-plus-sign"></i>New event');
  t('<i class="icon-user"></i>Volunteers');


  return $menu_links;
}
