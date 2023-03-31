#include "binary_trees.h"
/**
  * binary_tree_node - creates a binary node tree
  * @parent: pointer to the parent node
  * @value: new data of type int
  *
  * Return: a pointer to the new node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node != NULL)
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		if (parent == NULL)
		{
			parent = new_node;
			return (parent);
		}
		else
		{
			new_node->parent = parent;
			if (parent->n < value)
			{
				if (parent->left == NULL)
					parent->left = new_node;
			}
			else
			{
				if (parent->right == NULL)
					parent->right = new_node;
			}
		}
		return (new_node);
	}
	else
		return (NULL);
}