<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */
  
/**
 * Provides a custom views field.
 */
class dfc_lifetime_points_sort extends views_handler_sort {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function query(){
    $alias = 'userpoints_lifetime';
    if(!isset($this->query->table_queue['userpoints_lifetime'])){
      $table = 'userpoints';
      $left_table = 'users';
      $left_field = 'uid';
      $field = 'uid';
      $join = new views_join();
      $extra = array();
      $extra[] = array(
        'table' => $alias,
        'field' => 'tid',
        'value' => 1,
        'operator' => '=',
      );
      $join->construct($table, $left_table, $left_field, $field, $extra, 'LEFT');
      $alias = $this->query->add_relationship($alias, $join, $this->table_alias, $this->relationship);
      $this->query->add_field($alias, 'points');
    }
    $this->query->add_orderby($alias, 'points', $this->options['order']);
  }
}