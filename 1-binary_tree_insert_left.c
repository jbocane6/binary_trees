#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node
 * as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL, *temp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->right = NULL;
	new->n = value;

	if (parent->left)
	{
		temp = parent->left;
		new->left = temp;
		parent->left = new;
		temp->parent = new;
		return (new);
	}

	else
	{
		new->left = NULL;
		parent->left = new;
	}
	return (new);
}
