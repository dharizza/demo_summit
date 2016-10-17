<?php
/**
 * @file
 * demo_permissions.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function demo_permissions_default_roles_permissions() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access overlay' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site reports' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'administer actions' => TRUE,
      'administer blocks' => TRUE,
      'administer comments' => TRUE,
      'administer content types' => TRUE,
      'administer features' => TRUE,
      'administer fields' => TRUE,
      'administer filters' => TRUE,
      'administer image styles' => TRUE,
      'administer menu' => TRUE,
      'administer modules' => TRUE,
      'administer nodes' => TRUE,
      'administer permissions' => TRUE,
      'administer search' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer taxonomy' => TRUE,
      'administer themes' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'block IP addresses' => TRUE,
      'bypass node access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'configure user login redirect' => TRUE,
      'create article content' => TRUE,
      'create page content' => TRUE,
      'create url aliases' => TRUE,
      'customize shortcut links' => TRUE,
      'delete any article content' => TRUE,
      'delete any page content' => TRUE,
      'delete own article content' => TRUE,
      'delete own page content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'display drupal links' => TRUE,
      'edit any article content' => TRUE,
      'edit any page content' => TRUE,
      'edit own article content' => TRUE,
      'edit own comments' => TRUE,
      'edit own page content' => TRUE,
      'edit terms in 1' => TRUE,
      'flush caches' => TRUE,
      'generate features' => TRUE,
      'manage features' => TRUE,
      'post comments' => TRUE,
      'rename features' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'skip comment approval' => TRUE,
      'switch shortcut sets' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'use text format filtered_html' => TRUE,
    ),
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
    'permissions' => array(
      'access comments' => TRUE,
      'access content' => TRUE,
      'post comments' => TRUE,
      'skip comment approval' => TRUE,
      'use text format filtered_html' => TRUE,
    ),
  );

  // Exported role: content creator
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => 3,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content overview' => TRUE,
      'administer nodes' => TRUE,
      'create article content' => TRUE,
      'create page content' => TRUE,
      'delete own article content' => TRUE,
      'delete own page content' => TRUE,
      'edit own article content' => TRUE,
      'edit own page content' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
    ),
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
    'weight' => 4,
    'permissions' => array(
      'access administration menu' => TRUE,
      'access administration pages' => TRUE,
      'access content overview' => TRUE,
      'administer filters' => TRUE,
      'administer image styles' => TRUE,
      'administer menu' => TRUE,
      'administer nodes' => TRUE,
      'administer site configuration' => TRUE,
      'create article content' => TRUE,
      'create page content' => TRUE,
      'delete any article content' => TRUE,
      'delete any page content' => TRUE,
      'delete own article content' => TRUE,
      'delete own page content' => TRUE,
      'edit any article content' => TRUE,
      'edit any page content' => TRUE,
      'edit own article content' => TRUE,
      'edit own page content' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
    ),
  );

  return $roles;
}
