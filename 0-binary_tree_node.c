#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put inside the new node
 *
 * Return: Pointer to the new node, or NULL if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tr = malloc(sizeof(*tr));

	if (tr == NULL)
	return (NULL);

	tr->parent = parent;
	tr->n = value;
	tr->left = NULL;
	tr->right = NULL;
	return (tr);
}
