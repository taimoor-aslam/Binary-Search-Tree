#pragma once
#ifndef _TREENODE_H
#define _TREENODE_H
#include<iostream>
using namespace std;
class TreeNode
{
private:
	int data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	void setright(TreeNode*);
	void setleft(TreeNode*);
	TreeNode* getright();
	TreeNode* getleft();
	void setdata(int val);
	int getdata();
};
#endif