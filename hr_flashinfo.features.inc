<?php
/**
 * @file
 * hr_flashinfo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_flashinfo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_flashinfo_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_flashinfo_node_info() {
  $items = array(
    'flash_info' => array(
      'name' => t('Flash info'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Recent information'),
      'help' => '',
    ),
  );
  return $items;
}
