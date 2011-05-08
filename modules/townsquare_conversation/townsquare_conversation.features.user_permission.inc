<?php
/**
 * @file
 * townsquare_conversation.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function townsquare_conversation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create conversation content
  $permissions['create conversation content'] = array(
    'name' => 'create conversation content',
    'roles' => array(
      0 => 'keyholder',
      1 => 'staff',
      2 => 'volunteer',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any conversation content
  $permissions['delete any conversation content'] = array(
    'name' => 'delete any conversation content',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own conversation content
  $permissions['delete own conversation content'] = array(
    'name' => 'delete own conversation content',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any conversation content
  $permissions['edit any conversation content'] = array(
    'name' => 'edit any conversation content',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own conversation content
  $permissions['edit own conversation content'] = array(
    'name' => 'edit own conversation content',
    'roles' => array(
      0 => 'keyholder',
      1 => 'staff',
      2 => 'volunteer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
