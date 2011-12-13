<?php
/**
 * @file
 * freegeek_townsquare_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function freegeek_townsquare_roles_user_default_roles() {
  $roles = array();

  // Exported role: staff
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => '4',
  );

  // Exported role: volunteer
  $roles['volunteer'] = array(
    'name' => 'volunteer',
    'weight' => '2',
  );

  // Exported role: volunteer manager
  $roles['volunteer manager'] = array(
    'name' => 'volunteer manager',
    'weight' => '3',
  );

  return $roles;
}
