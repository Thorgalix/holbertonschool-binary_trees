#include "binary_trees.h"
/**
 * binary_tree_delete - delete binary tree
 * @tree: pointer to the node to delete
 *
 * Return: if tree is empty
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
