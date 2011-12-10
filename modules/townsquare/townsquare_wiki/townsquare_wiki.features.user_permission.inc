<?php
/**
 * @file
 * townsquare_wiki.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function townsquare_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wiki content
  $permissions['create wiki content'] = array(
    'name' => 'create wiki content',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any wiki content
  $permissions['delete any wiki content'] = array(
    'name' => 'delete any wiki content',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own wiki content
  $permissions['delete own wiki content'] = array(
    'name' => 'delete own wiki content',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any wiki content
  $permissions['edit any wiki content'] = array(
    'name' => 'edit any wiki content',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own wiki content
  $permissions['edit own wiki content'] = array(
    'name' => 'edit own wiki content',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
