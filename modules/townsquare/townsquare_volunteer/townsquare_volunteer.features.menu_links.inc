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

  // Exported menu link: main-menu:admin/people/create
  $menu_links['main-menu:admin/people/create'] = array(
    'menu_name' => 'main-menu',
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
  // Exported menu link: main-menu:event
  $menu_links['main-menu:event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '30',
  );
  // Exported menu link: main-menu:event/create
  $menu_links['main-menu:event/create'] = array(
    'menu_name' => 'main-menu',
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
  // Exported menu link: main-menu:volunteer
  $menu_links['main-menu:volunteer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'volunteer',
    'router_path' => 'volunteer',
    'link_title' => 'Volunteers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
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
