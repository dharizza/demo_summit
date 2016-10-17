<?php
/**
 * @file
 * demo_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function demo_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content creator.
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => 3,
  );

  // Exported role: site manager.
  $roles['site manager'] = array(
    'name' => 'site manager',
    'weight' => 4,
  );

  return $roles;
}
