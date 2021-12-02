#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node
 * as the right-child of another node.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *temp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->n = value;

	if (parent->right)
	{
		temp = parent->right;
		new->right = temp;
		parent->right = new;
		temp->parent = new;
		return (new);
	}

	else
	{
		new->right = NULL;
		parent->right = new;
	}
	return (new);
}
