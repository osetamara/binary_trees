#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if the tree and func are not NULL.*/
	if (tree && func)
	{
		/*Recursively traverse the left subtree in in-order.*/
		binary_tree_inorder(tree->left, func);
		/*Call the function 'func' for the current node.*/
		func(tree->n);
		/* Recursively traverse the right subtree in in-order.*/
		binary_tree_inorder(tree->right, func);
	}
}
