#include "binary_trees.h"
/**
  * binary_tree_insert_left -insert a binary node as the left child
  * @parent: pointer to the parent node
  * @value: new data of type int
  *
  * Return: a pointer to the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		while (parent->left != NULL)
		{
			new_node->left = parent->left;
			parent->left = new_node;
		}
		parent->left = new_node;
		return (new_node);
		free(new_node);
	}
	else
		return (NULL);
}
