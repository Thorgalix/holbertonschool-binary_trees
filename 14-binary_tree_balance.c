#include "binary_trees.h"
/**
 * binary_tree_balance - mesure balance factor of a tree
 * @tree: root node
 *
 * Return: difference left - right, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft = 0, hright = 0;

	if (!tree)
	return (0);

	if (tree->left)
	hleft = 1 + binary_tree_balance(tree->left);

	if (tree->right)
	hright = 1 + binary_tree_balance(tree->right);

	return (hleft - hright);
}
