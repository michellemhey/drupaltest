<?php
/**
 * @file
 * d7_base_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function d7_base_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access ckeditor link'.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'administer ckeditor link'.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'client' => 'client',
      'developer' => 'developer',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
