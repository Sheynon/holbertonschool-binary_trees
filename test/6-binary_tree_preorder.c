#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses the binary tree using pre-order traver
 * A pre-order traversal consists of visiting the root node first,
 * then the left subtree, and finally the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	funct(tree->n);

	binary_tree_preroder(tree->left, func);

	binary_tree_preorfer(tree->right, func);
}
