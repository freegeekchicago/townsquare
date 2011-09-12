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

  // Exported menu link: menu-townsquare-secondary-tools:event/create
  $menu_links['menu-townsquare-secondary-tools:event/create'] = array(
    'menu_name' => 'menu-townsquare-secondary-tools',
    'link_path' => 'event/create',
    'router_path' => 'event/create',
    'link_title' => 'Create event & log hours',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create event & log hours');


  return $menu_links;
}
