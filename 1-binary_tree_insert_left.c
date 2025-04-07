#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_left - function to insert a node as the left child of another node
 * @parent: pointer to the parent node
 * @value: value of the node to add
 *
 * Return: pointer to the created node or NULL if it fail or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent-> != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent-> = new_node;
	return (new_node);
}
