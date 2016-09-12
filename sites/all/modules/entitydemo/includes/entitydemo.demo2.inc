<?php

function entitydemo_demo2(){

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node');
  $result = $query->execute();
  //dpm($result);

  $query = new EntityFieldQuery();
  $query->fieldCondition('field_number', 'value', 100, '>');
  $result = $query->execute();
  //dpm($result);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node');
  $query->propertyCondition('promote', 1);
  $result = $query->execute();
  //dpm($result);
  $nids = array_keys($result['node']);
  $nodes = entity_load('node', $nids);
  dpm($nodes);

  return "Hello";
}

