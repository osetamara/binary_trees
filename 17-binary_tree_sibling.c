#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*Check if the given node is NULL or has no parent.*/
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/*Check if given node left child of its parentg return right child.*/
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
