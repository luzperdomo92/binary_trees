#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree:  is a pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_left;
	int check_right;

	if (tree == NULL)
		return (0);

	check_left = binary_tree_size(tree->left);
	check_right = binary_tree_size(tree->right);
	if (check_left == check_right)
		return (1);

	return (0);
}
