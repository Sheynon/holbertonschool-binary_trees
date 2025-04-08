#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the node to measure the height from
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
static int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (left_height - right_height);
}
