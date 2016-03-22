<?php

foreach ($panes as $pane_id => $pane) {
	
	
		echo theme('fieldset', array('element' => array(
      '#title' => $pane['title'],
      '#children' => $pane['data'],
      '#collapsible' => false,
      '#attributes' => array('class' => array('pane', $pane_id)),
    )));
	
    
  }
?>