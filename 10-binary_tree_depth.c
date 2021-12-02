#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree.
 * @tree: Pointer to the root node of the tree to measure the dept.
 * Return: 0 if tree is NULL, else depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (1 + depth);
}
