<?php
/**
 * @file
 * bibsdb_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function bibsdb_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Bibsdb.
  $formats['bibsdb'] = array(
    'format' => 'bibsdb',
    'name' => 'Bibsdb',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'filter_html' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <p> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <table> <tr> <th> <td> <br> <img> <iframe> <h2> <h3> <h4> <h5> <h6> <div> <audio> <source><style>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
