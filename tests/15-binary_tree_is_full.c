#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Si c'est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si les deux enfants sont présents, on vérifie récursivement */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* Sinon, ce n’est pas un arbre plein */
	return (0);
}

