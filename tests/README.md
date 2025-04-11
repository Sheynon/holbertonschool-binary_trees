# Binary Trees

This project is part of the Holberton School curriculum and focuses on implementing and manipulating binary trees in C.

## Description

The goal of this project is to understand and implement various operations on binary trees, including creation, traversal, insertion, deletion, and property checks. This is a foundation for more complex data structures like Binary Search Trees, AVL Trees, and Heaps.

## Learning Objectives

- Understand the concept of a binary tree and its structure
- Be able to implement basic binary tree operations in C
- Recursively traverse trees using preorder, inorder, and postorder
- Understand and manipulate different tree types: Binary Tree, Binary Search Tree, AVL, and Heap
- Handle memory management for dynamic tree structures
- Write readable and maintainable C code using Betty style

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS, GCC with flags
- No global variables
- Maximum of 5 functions per file
- All function prototypes are included in `binary_trees.h`
- All header files are include guarded
- All files end with a new line
i
## Data Structures

```c
/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/
struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

## Example Compilation

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 12-main.c 12-binary_tree_leaves.c binary_tree_print.c 0-binary_tree_node.c -o 12-leaves
./12-leaves

## Authors

- Florian Chereau
- Jonathan Labaldie
- Romain Le Boulzec
