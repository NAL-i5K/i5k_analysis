<?php
/**
 * @file
 * i5k_analysis.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function i5k_analysis_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'TripalEntity|bio_data_2|default';
  $ds_fieldsetting->entity_type = 'TripalEntity';
  $ds_fieldsetting->bundle = 'bio_data_2';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'toc' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['TripalEntity|bio_data_2|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function i5k_analysis_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'TripalEntity|bio_data_2|default';
  $ds_layout->entity_type = 'TripalEntity';
  $ds_layout->bundle = 'bio_data_2';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'tripal_ds_feature';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'rdfs__type',
        2 => 'schema__name',
        3 => 'group_summary_tripalpane',
        4 => 'schema__description',
        5 => 'swo__software',
        6 => 'iao__version_number',
        7 => 'iao__algorithm',
        8 => 'local__time_executed',
        9 => 'local__source_data',
        10 => 'obi__organism_linker',
        11 => 'group_summary_table',
      ),
      'left' => array(
        1 => 'toc',
      ),
    ),
    'fields' => array(
      'rdfs__type' => 'right',
      'toc' => 'left',
      'schema__name' => 'right',
      'group_summary_tripalpane' => 'right',
      'schema__description' => 'right',
      'swo__software' => 'right',
      'iao__version_number' => 'right',
      'iao__algorithm' => 'right',
      'local__time_executed' => 'right',
      'local__source_data' => 'right',
      'obi__organism_linker' => 'right',
      'group_summary_table' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['TripalEntity|bio_data_2|default'] = $ds_layout;

  return $export;
}
