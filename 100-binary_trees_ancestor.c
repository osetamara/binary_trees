#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mom, *pop;
	/*Check if either of the nodes is NULL.*/
	if (!first || !second)
		return (NULL);
	/*If the two nodes are same, return one of them as common ancestor.*/
	if (first == second)
		return ((binary_tree_t *)first);
	/* Initialize variables for the parents of the two nodes.*/
	mom = first->parent, pop = second->parent;
	/*Compare the paths and find the lowest common ancestor recursively.*/
	if (first == pop || !mom || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mom == second || !pop || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, second));
	return (binary_trees_ancestor(mom, pop));
}
