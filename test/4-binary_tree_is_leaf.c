#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf 0 otherwise or if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
