#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1 if is full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->right || tree->left))
		return (1);

	return (binary_tree_is_full(tree->left) *
	binary_tree_is_full(tree->right));
}
