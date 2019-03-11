<?php
/**
 * @file
 * i5k_analysis.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function i5k_analysis_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_table|TripalEntity|bio_data_2|default';
  $field_group->group_name = 'group_summary_table';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_2';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_summary_tripalpane';
  $field_group->data = array(
    'label' => 'Summary Table',
    'weight' => '10',
    'children' => array(
      0 => 'obi__organism_linker',
      1 => 'local__time_executed',
      2 => 'swo__software',
      3 => 'schema__description',
      4 => 'local__source_data',
      5 => 'iao__algorithm',
      6 => 'iao__version_number',
      7 => 'schema__name',
      8 => 'rdfs__type',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Summary Table',
      'instance_settings' => array(
        'label_visibility' => '1',
        'desc' => '',
        'first_column' => '',
        'second_column' => '',
        'empty_label_behavior' => '1',
        'table_row_striping' => 0,
        'always_show_field_label' => 0,
        'classes' => 'group-summary-table field-group-table',
      ),
    ),
  );
  $field_groups['group_summary_table|TripalEntity|bio_data_2|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_tripalpane|TripalEntity|bio_data_2|default';
  $field_group->group_name = 'group_summary_tripalpane';
  $field_group->entity_type = 'TripalEntity';
  $field_group->bundle = 'bio_data_2';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary',
    'weight' => '1',
    'children' => array(
      0 => 'group_summary_table',
    ),
    'format_type' => 'tripalpane',
    'format_settings' => array(
      'label' => 'Summary',
      'instance_settings' => array(
        'id' => 'tripal_ds-fieldset-group_summary_tripalpane',
        'classes' => 'group-summary-tripalpane field-group-tripalpane',
        'description' => '',
        'hide' => 0,
      ),
    ),
  );
  $field_groups['group_summary_tripalpane|TripalEntity|bio_data_2|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Summary');
  t('Summary Table');

  return $field_groups;
}
