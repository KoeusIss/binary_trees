#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: a pointer to the root node
 *
 * Return: the balance factor, O otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right)
		return (-1);
	if (tree->right == NULL && tree->left)
		return (1);
	return (binary_tree_balance(tree->left) -
		binary_tree_balance(tree->right));
}
