#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node to find uncle
 *
 * Return: the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
	return (NULL);

	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node to find sibling
 *
 * Return: the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	return (NULL);

	if (node->parent->left == node)
	return (node->parent->right);
	else
	return (node->parent->left);
}
