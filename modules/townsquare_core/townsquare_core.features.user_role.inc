<?php

/**
 * Implementation of hook_user_default_roles().
 */
function townsquare_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: keyholder
  $roles['keyholder'] = array(
    'name' => 'keyholder',
    'weight' => '3',
  );

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

  return $roles;
}
