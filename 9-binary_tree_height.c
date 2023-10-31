#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Check if the tree is not NULL.*/
	if (tree)
	{
		size_t l = 0, r = 0;
		/*Calculate the height of the left subtree, if it exists.*/
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/*calculate the height of the right subtree, if it exists*/
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/*Return the greater of the two heights plus 1.*/
		return ((l > r) ? l : r);
	}
	return (0);
}
