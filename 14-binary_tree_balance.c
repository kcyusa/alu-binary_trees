#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * tree_height - Helper function to calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
static int tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int left_height = tree_height(tree->left);
int right_height = tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (tree_height(tree->left) - tree_height(tree->right));
}
