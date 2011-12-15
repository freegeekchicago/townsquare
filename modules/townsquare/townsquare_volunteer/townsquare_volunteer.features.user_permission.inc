<?php
/**
 * @file
 * townsquare_volunteer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function townsquare_volunteer_user_default_permissions() {
  $permissions = array();

  // Exported permission: create volunteer_session content
  $permissions['create volunteer_session content'] = array(
    'name' => 'create volunteer_session content',
    'roles' => array(),
  );

  // Exported permission: delete any volunteer_session content
  $permissions['delete any volunteer_session content'] = array(
    'name' => 'delete any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own volunteer_session content
  $permissions['delete own volunteer_session content'] = array(
    'name' => 'delete own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any volunteer_session content
  $permissions['edit any volunteer_session content'] = array(
    'name' => 'edit any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own volunteer_session content
  $permissions['edit own volunteer_session content'] = array(
    'name' => 'edit own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
