#include "binary_trees.h"
/**
 * binary_tree_inorder - using in-order traversal to print values
 * @tree: tree to being gone through
 * @func: function to being used
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
