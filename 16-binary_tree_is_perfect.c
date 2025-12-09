#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: root node
 *
 * Return: 1 if perfect, or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (!tree->left && !tree->right)
	return (1);

	if (!tree->left || !tree->right)
	return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
	return (1);

	return (0);
}
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
