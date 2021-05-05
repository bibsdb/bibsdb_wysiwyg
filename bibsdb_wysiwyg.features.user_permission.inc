<?php
/**
 * @file
 * bibsdb_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bibsdb_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'guest blogger' => 'guest blogger',
      'local administrator' => 'local administrator',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'use text format bibsdb'.
  $permissions['use text format bibsdb'] = array(
    'name' => 'use text format bibsdb',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'guest blogger' => 'guest blogger',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format ding_wysiwyg'.
  $permissions['use text format ding_wysiwyg'] = array(
    'name' => 'use text format ding_wysiwyg',
    'roles' => array(
      'administrators' => 'administrators',
      'editor' => 'editor',
      'guest blogger' => 'guest blogger',
      'local administrator' => 'local administrator',
      'local editor' => 'local editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
