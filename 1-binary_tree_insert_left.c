#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates a new tree node to the left
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put inside the new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tr, *old;

	if (parent == NULL)
	return (NULL);

	tr = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		old = parent->left;
		tr->left = old;
		old->parent = tr;
	}

	parent->left = tr;
	return (tr);

}
