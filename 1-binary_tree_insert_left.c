#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	/*reate a new binary tree node with the specified value.*/
	if (parent == NULL)
		return (NULL);
	/*reate a new binary tree node with the specified value.*/
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
/*If the parent already has a left child, move it to the new node.*/
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	/*Set the new node as the left child of the parent.*/
	parent->left = new;

	return (new);
}
