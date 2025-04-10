#include "binary_trees.h"

/**
 * depth - Measures the depth of the leftmost path
 * @tree: Pointer to the root node
 *
 * Return: Depth (height) of the tree
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect_recursive - Checks recursively if a tree is perfect
 * @tree: Pointer to the current node
 * @d: Expected depth of all leaf nodes
 * @level: Current level in the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (1);

	/* Si feuille */
	if (!tree->left && !tree->right)
		return (d == level + 1);

	/* Si un des enfants est NULL, ce n'est pas parfait */
	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, d, level + 1) &&
		is_perfect_recursive(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = depth(tree);
	return (is_perfect_recursive(tree, d, 0));
}
