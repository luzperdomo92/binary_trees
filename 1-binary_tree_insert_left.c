#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Stores recursively each level in an array of strings
 *
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure 
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;
	binary_tree_t *temp_node;

	if  (parent == NULL)
		return (NULL);

	temp_node = parent->left;
	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
		return (NULL);

	parent->left = new_left_node;

	if (temp_node != NULL)
	{
		new_left_node->left = temp_node;
		temp_node->parent = new_left_node;
	}
	return (new_left_node);	
}
