#include "binary_trees.h"
/**
 * binary_tree_height - iterative height of a binary tree
 * @tree: root node
 *
 * Return: height, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (!tree)
	return (0);

	if (tree->left)
	hleft = 1 + binary_tree_height(tree->left);

	if (tree->right)
	hright = 1 + binary_tree_height(tree->right);

	return (hleft > hright ? hleft : hright);
}
