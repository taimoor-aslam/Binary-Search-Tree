#include"TreeNode.h"

TreeNode::TreeNode()
{
	left = right = NULL;
}
void TreeNode::setright(TreeNode* ptr)
{
	right = ptr;
}
void TreeNode::setleft(TreeNode* ptr)
{
	left = ptr;
}
TreeNode* TreeNode::getright()
{
	return right;
}
TreeNode* TreeNode::getleft()
{
	return left;
}
void TreeNode::setdata(int val)
{
	data = val;
}
int TreeNode::getdata()
{
	return data;
}