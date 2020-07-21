#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node.
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_right_node;
	binary_tree_t *temp_node;

	if  (parent == NULL)
		return (NULL);

	temp_node = parent->right;
	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);

	parent->right = new_right_node;

	if (temp_node != NULL)
	{
		new_right_node->right = temp_node;
		temp_node->parent = new_right_node;
	}
	return (new_right_node);
}
