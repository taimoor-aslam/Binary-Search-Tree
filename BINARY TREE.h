#pragma once
#ifndef _BINARY_TREE_H
#define  _BINARY_TREE_H
#include"TreeNode.h"
#include<iostream>
#include<queue>                    // It is used to Implement LAB TASK
using namespace std;
class BST
{
private:
	TreeNode* root;
	TreeNode* getRoot()const;        // getRoot() is only needed for traversals, so to avoid from encapsulation violation, we make it private.
	void inOrderTrvaversal(TreeNode*);
	void postOrderTraversal(TreeNode*);
	void preOrderTraversal(TreeNode*);
public:
	BST();
	void insert(int);
	bool search(int);
	void inOrderTrvaversal();
	void postOrderTraversal();
	void preOrderTraversal();
	void DeleteNode(int val);
	void CountLeafNode()const;           // LAB TASK, it's not a part of Binary Search Tree.
};
#endif
