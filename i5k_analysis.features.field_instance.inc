<?php
/**
 * @file
 * i5k_analysis.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function i5k_analysis_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'TripalEntity-bio_data_2-iao__algorithm'.
  $field_instances['TripalEntity-bio_data_2-iao__algorithm'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The name of the algorithm used to produce the dataset if different from the program.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'iao__algorithm',
    'label' => 'Algorithm',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'algorithm',
      'chado_table' => 'analysis',
      'term_accession' => '0000064',
      'term_fixed' => FALSE,
      'term_name' => 'algorithm',
      'term_vocabulary' => 'IAO',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-iao__version_number'.
  $field_instances['TripalEntity-bio_data_2-iao__version_number'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The version of the program used to perform this analysis. (e.g. TBLASTX 2.0MP-WashU [09-Nov-2000]. Enter "n/a" if no version is available or applicable.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'iao__version_number',
    'label' => 'Program Version',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'programversion',
      'chado_table' => 'analysis',
      'term_accession' => '0000129',
      'term_fixed' => FALSE,
      'term_name' => 'version number',
      'term_vocabulary' => 'IAO',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-local__source_data'.
  $field_instances['TripalEntity-bio_data_2-local__source_data'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The source where data was obtained for this analysis.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'local__source_data_formatter',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__source_data',
    'label' => 'Data Source',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'analysis_id',
      'chado_table' => 'analysis',
      'term_accession' => 'source_data',
      'term_fixed' => FALSE,
      'term_name' => 'source_data',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'local__source_data_widget',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-local__time_executed'.
  $field_instances['TripalEntity-bio_data_2-local__time_executed'] = array(
    'bundle' => 'bio_data_2',
    'deleted' => 0,
    'description' => 'The date and time when the analysis was performed.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'local__time_executed',
    'label' => 'Date Performed',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'timeexecuted',
      'chado_table' => 'analysis',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'term_accession' => 'timeexecuted',
      'term_fixed' => FALSE,
      'term_name' => 'time_executed',
      'term_vocabulary' => 'local',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'collapsible' => TRUE,
        'display_label' => 1,
        'increment' => 1,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'tz_handling' => 'none',
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-obi__organism_linker'.
  $field_instances['TripalEntity-bio_data_2-obi__organism_linker'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Organism associated with this entity',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tripal',
        'settings' => array(
          'setting1' => 'default_value',
        ),
        'type' => 'obi__organism_linker_formatter',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'obi__organism_linker',
    'label' => 'Organism',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => FALSE,
      'base_table' => 'analysis',
      'chado_column' => 'analysis_id',
      'chado_table' => 'organism_analysis',
      'download_formatters' => array(
        0 => 'TripalTabDownloader',
        1 => 'TripalCSVDownloader',
      ),
      'term_accession' => '0100026',
      'term_fixed' => FALSE,
      'term_name' => 'organism',
      'term_vocabulary' => 'OBI',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(),
      'type' => 'obi__organism_linker_widget',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-rdfs__type'.
  $field_instances['TripalEntity-bio_data_2-rdfs__type'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The resource type',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'tripal',
        'settings' => array(),
        'type' => 'rdfs__type_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'rdfs__type',
    'label' => 'Resource Type',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'term_accession' => 'type',
      'term_fixed' => TRUE,
      'term_name' => 'type',
      'term_vocabulary' => 'rdfs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'tripal',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'rdfs__type_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-schema__description'.
  $field_instances['TripalEntity-bio_data_2-schema__description'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'schema__description',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'description',
      'chado_table' => 'analysis',
      'format' => 'full_html',
      'term_accession' => 'description',
      'term_fixed' => FALSE,
      'term_name' => 'description',
      'term_vocabulary' => 'schema',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-schema__name'.
  $field_instances['TripalEntity-bio_data_2-schema__name'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'schema__name',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'name',
      'chado_table' => 'analysis',
      'term_accession' => 'name',
      'term_fixed' => FALSE,
      'term_name' => 'name',
      'term_vocabulary' => 'schema',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'TripalEntity-bio_data_2-swo__software'.
  $field_instances['TripalEntity-bio_data_2-swo__software'] = array(
    'bundle' => 'bio_data_2',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The program name (e.g. blastx, blastp, sim4, genscan. If the analysis was not derived from a software package then provide a very brief description of the pipeline, workflow or method.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'TripalEntity',
    'field_name' => 'swo__software',
    'label' => 'Program, Pipeline, Workflow or Method Name',
    'required' => TRUE,
    'settings' => array(
      'auto_attach' => TRUE,
      'base_table' => 'analysis',
      'chado_column' => 'program',
      'chado_table' => 'analysis',
      'term_accession' => '0000001',
      'term_fixed' => FALSE,
      'term_name' => 'software',
      'term_vocabulary' => 'SWO',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'display_label' => 1,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Algorithm');
  t('Data Source');
  t('Date Performed');
  t('Description');
  t('Name');
  t('Organism');
  t('Organism associated with this entity');
  t('Program Version');
  t('Program, Pipeline, Workflow or Method Name');
  t('Resource Type');
  t('The date and time when the analysis was performed.');
  t('The name of the algorithm used to produce the dataset if different from the program.');
  t('The program name (e.g. blastx, blastp, sim4, genscan. If the analysis was not derived from a software package then provide a very brief description of the pipeline, workflow or method.');
  t('The resource type');
  t('The source where data was obtained for this analysis.');
  t('The version of the program used to perform this analysis. (e.g. TBLASTX 2.0MP-WashU [09-Nov-2000]. Enter "n/a" if no version is available or applicable.');

  return $field_instances;
}
