#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 * Return: 0 if tree is NULL, else number of leaves.
 * A NULL pointer is not a leaf.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->right || tree->left))
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
