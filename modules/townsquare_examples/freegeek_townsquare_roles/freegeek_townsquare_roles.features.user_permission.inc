<?php
/**
 * @file
 * freegeek_townsquare_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function freegeek_townsquare_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access markdownify
  $permissions['access markdownify'] = array(
    'name' => 'access markdownify',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'markdownify',
  );

  // Exported permission: access markdownify example pages
  $permissions['access markdownify example pages'] = array(
    'name' => 'access markdownify example pages',
    'roles' => array(),
  );

  // Exported permission: access search_api_page
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'user',
  );

  // Exported permission: administer gravatar
  $permissions['administer gravatar'] = array(
    'name' => 'administer gravatar',
    'roles' => array(),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'user',
  );

  // Exported permission: administer volunteer hours
  $permissions['administer volunteer hours'] = array(
    'name' => 'administer volunteer hours',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'townsquare_volunteer',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'path',
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: disable own gravatar
  $permissions['disable own gravatar'] = array(
    'name' => 'disable own gravatar',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: edit terms in 1
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer',
      2 => 'volunteer manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: markdownify any text
  $permissions['markdownify any text'] = array(
    'name' => 'markdownify any text',
    'roles' => array(),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
  );

  // Exported permission: use gravatar
  $permissions['use gravatar'] = array(
    'name' => 'use gravatar',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'gravatar',
  );

  // Exported permission: use search_api_autocomplete
  $permissions['use search_api_autocomplete'] = array(
    'name' => 'use search_api_autocomplete',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  // Exported permission: view own unpublished content
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view own volunteer hours
  $permissions['view own volunteer hours'] = array(
    'name' => 'view own volunteer hours',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer',
      3 => 'volunteer manager',
    ),
    'module' => 'townsquare_volunteer',
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
