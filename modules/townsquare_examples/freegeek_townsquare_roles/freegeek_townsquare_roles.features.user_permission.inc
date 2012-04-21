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
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
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

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'user',
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
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

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
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

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
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

  // Exported permission: bypass node access
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
  );

  // Exported permission: cancel account
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      0 => 'staff',
      1 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'staff',
    ),
    'module' => 'path',
  );

  // Exported permission: create volunteer_session content
  $permissions['create volunteer_session content'] = array(
    'name' => 'create volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any volunteer_session content
  $permissions['delete any volunteer_session content'] = array(
    'name' => 'delete any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own volunteer_session content
  $permissions['delete own volunteer_session content'] = array(
    'name' => 'delete own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
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
      1 => 'volunteer manager',
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

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any volunteer_session content
  $permissions['edit any volunteer_session content'] = array(
    'name' => 'edit any volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own volunteer_session content
  $permissions['edit own volunteer_session content'] = array(
    'name' => 'edit own volunteer_session content',
    'roles' => array(
      0 => 'administrator',
      1 => 'staff',
      2 => 'volunteer manager',
    ),
    'module' => 'node',
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
      1 => 'volunteer manager',
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
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
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

  // Exported permission: use text format markdown
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(),
  );

  // Exported permission: use text format markdown_advanced
  $permissions['use text format markdown_advanced'] = array(
    'name' => 'use text format markdown_advanced',
    'roles' => array(),
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
