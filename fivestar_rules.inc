<?php

/**
* Implementation of hook_rules_action_info().
* @ingroup rules
*/
function fivestar_rules_action_info() {
  return array(
    'fivestar_node_save' => array(
      'label' => t('Show/Hide Fivestar widget for content.'),
      'arguments' => array(
        'node' => array('type' => 'node', 'label' => t('Content')),
        'disable' => array('type' => 'boolean', 'label' => t('Disable Fivestar?')),
      ),
      'module' => 'Fivestar',
    ),
  );
}