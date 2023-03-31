#include "binary_trees.h"
/**
  * binary_tree_delete - deletes all nodes in a binary  tree
  * @tree: pointer to the root node given
  *
  */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *next_left, next_right;

	if (tree == NULL)
		;
	while (tree->left != NULL && tree->right != NULL)
	{
		next_left = (tree->left)->left;
		next_right = (tree->right)->right;
		free(tree_left);
		free(tree_right);
		tree->left = next_left;
		tree->right = next_right;
	}
}
