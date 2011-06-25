
//
// ast.c
//
// Copyright (c) 2011 TJ Holowaychuk <tj@vision-media.ca>
//

#include "ast.h"

luna_block_node_t *
luna_block_node_new() {
  luna_block_node_t *self = malloc(sizeof(luna_block_node_t));
  self->base.type = LUNA_NODE_BLOCK;
  self->stmts = luna_array_new();
  return self;
}