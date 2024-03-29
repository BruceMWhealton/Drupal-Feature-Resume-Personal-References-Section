<?php
/**
 * @file
 * drupal_resume_personal_references_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_personal_references_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_personal_references_section_node_info() {
  $items = array(
    'personal_reference' => array(
      'name' => t('Personal Reference'),
      'base' => 'node_content',
      'description' => t('Information for Personal References'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
