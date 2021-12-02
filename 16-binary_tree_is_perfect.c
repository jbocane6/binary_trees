#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, else height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || !(tree->left || tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height >= right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL, otherwise 1 if is perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	if (!(tree->right || tree->left))
		return (1);

	if (binary_tree_height(tree->right) != binary_tree_height(tree->left))
		return (0);

	left_height = 1 * binary_tree_is_perfect(tree->left);
	right_height = 1 * binary_tree_is_perfect(tree->right);

	return (left_height * right_height);
}
