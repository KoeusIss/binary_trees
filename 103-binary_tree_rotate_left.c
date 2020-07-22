#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation
 * @tree: a pointer to root node
 *
 * Return: a pointer to the new root node, Null otherwise
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *first, *second;

	if (!tree)
		return (NULL);
	first = tree->right;
	second = first->left;
	tree->right = second;
	tree->parent = first;
	if (second)
		second->parent = tree;
	first->parent = NULL;
	first->left = tree;
	tree = first;
	return (tree);
}
