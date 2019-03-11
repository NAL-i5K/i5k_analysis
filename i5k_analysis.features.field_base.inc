<?php
/**
 * @file
 * i5k_analysis.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function i5k_analysis_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'iao__algorithm'.
  $field_bases['iao__algorithm'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'iao__algorithm',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'iao__version_number'.
  $field_bases['iao__version_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'iao__version_number',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'local__source_data'.
  $field_bases['local__source_data'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__source_data',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'local__source_data',
  );

  // Exported field_base: 'local__time_executed'.
  $field_bases['local__time_executed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'local__time_executed',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'obi__organism_linker'.
  $field_bases['obi__organism_linker'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'obi__organism_linker',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(
      'searchable_keys' => array(),
      'storage' => 'field_chado_storage',
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'obi__organism_linker',
  );

  // Exported field_base: 'rdfs__type'.
  $field_bases['rdfs__type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'rdfs__type',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tripal',
    'settings' => array(),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'type' => 'tripal_no_storage',
    ),
    'translatable' => 0,
    'type' => 'rdfs__type',
  );

  // Exported field_base: 'schema__description'.
  $field_bases['schema__description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'schema__description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 17179869184,
      'text_processing' => 1,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'schema__name'.
  $field_bases['schema__name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'schema__name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'swo__software'.
  $field_bases['swo__software'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'swo__software',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'tripal_chado',
      'settings' => array(
        'tripal_storage_api' => TRUE,
      ),
      'sql' => array(),
      'type' => 'field_chado_storage',
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
