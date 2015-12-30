<?php
/**
 * @file
 * Definition of example_handler_custom_field
 */
  
/**
 * Provides a custom views field.
 */
class dfc_lifetime_points extends views_handler_field_numeric {
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
  function render($data){
    $points = $data->userpoints_lifetime_points;
    if(empty($points)){
      $points = 0;
    }
    return $points; 
  }
  function query(){
    if(!isset($this->query->table_queue['userpoints_lifetime'])){
      $table = 'userpoints';
      $left_table = 'users';
      $left_field = 'uid';
      $field = 'uid';
      $join = new views_join();
      $alias = 'userpoints_lifetime';
      $extra = array();
      $extra[] = array(
        'table' => $alias,
        'field' => 'tid',
        'value' => 1,
        'operator' => '=',
      );
      $join->construct($table, $left_table, $left_field, $field, $extra, 'LEFT');
      $alias = $this->query->add_relationship($alias, $join, $this->table_alias, $this->relationship);
    }
    if(!isset($this->query->fields['userpoints_lifetime_points'])){
      $this->query->add_field('userpoints_lifetime', 'points');
    }
  }
}