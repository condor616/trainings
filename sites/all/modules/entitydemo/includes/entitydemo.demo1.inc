<?php

/**
 * @file
 * Demonstrates common ways of interacting with the entity system
 */

function entitydemo_demo1() {

  /* 1
  $entity = entity_load('node', array(1));
  */

  $id = "5";
  $type = "node";
  $entity = entity_load($type, array($id));
  $entity = reset($entity);
  dpm($entity);


  /* 2
   * Extract ID from an Entity Object
   */
  list($id, $vid, $bundle) = entity_extract_ids($type, $entity);
  dpm($id);



  return "function entitydemo_page1";
}
