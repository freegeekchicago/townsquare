<?php
/**
 * @file
 * townsquare_volunteer.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function townsquare_volunteer_user_default_permissions() {
  $permissions = array();

  // Exported permission: access event views
  $permissions['access event views'] = array(
    'name' => 'access event views',
    'roles' => array(
      0 => 'administrator',
      1 => 'keyholder',
      2 => 'staff',
    ),
    'module' => 'townsquare_volunteer',
  );

  // Exported permission: access public volunteer views
  $permissions['access public volunteer views'] = array(
    'name' => 'access public volunteer views',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'townsquare_volunteer',
  );

  // Exported permission: create volunteer_session content
  $permissions['create volunteer_session content'] = array(
    'name' => 'create volunteer_session content',
    'roles' => array(
      0 => 'keyholder',
      1 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any volunteer_session content
  $permissions['delete any volunteer_session content'] = array(
    'name' => 'delete any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own volunteer_session content
  $permissions['delete own volunteer_session content'] = array(
    'name' => 'delete own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any volunteer_session content
  $permissions['edit any volunteer_session content'] = array(
    'name' => 'edit any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'keyholder',
      2 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own volunteer_session content
  $permissions['edit own volunteer_session content'] = array(
    'name' => 'edit own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: view all volunteer hours
  $permissions['view all volunteer hours'] = array(
    'name' => 'view all volunteer hours',
    'roles' => array(
      0 => 'administrator',
      1 => 'keyholder',
      2 => 'staff',
    ),
    'module' => 'townsquare_volunteer',
  );

  // Exported permission: view own volunteer hours
  $permissions['view own volunteer hours'] = array(
    'name' => 'view own volunteer hours',
    'roles' => array(
      0 => 'administrator',
      1 => 'keyholder',
      2 => 'staff',
      3 => 'volunteer',
    ),
    'module' => 'townsquare_volunteer',
  );

  return $permissions;
}
