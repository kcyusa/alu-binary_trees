#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Helper function to measure the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: height | 0 | NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height, right_height;

		if (tree == NULL)
		{
			return (0);
		}

		left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (left_height > right_height ? left_height : right_height);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: balance_factor | 0 | NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
