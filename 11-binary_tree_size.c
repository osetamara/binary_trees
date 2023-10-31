#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	/*check if the tree is null*/
	if (tree)
	{
		/*increment the size to account for the current node*/
		size += 1;
		/*Recursively calculate the size of the left sutree*/
		size += binary_tree_size(tree->left);
		/*Recursively calculate the size of the right subtree*/
		size += binary_tree_size(tree->right);
	}
	return (size);
}
