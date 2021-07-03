
#include"BINARY TREE.h"
BST::BST()
{
	root = NULL;
}
void BST::insert(int val)
{
	TreeNode* newnode = new TreeNode();
	newnode->setdata(val);
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		TreeNode* parent, *location;
		parent = location = root;
		while (val != parent->getdata() && location != NULL)
		{
			parent = location;
			if (val < parent->getdata())
			{
				location = parent->getleft();
			}
			else
			{
				location = parent->getright();
			}
		}
		if (val == parent->getdata())
		{
			cout << "Duplicate values are not allowed!" << endl;
		}
		else if (val < parent->getdata())
		{
			parent->setleft(newnode);
		}
		else
		{
			parent->setright(newnode);
		}

	}
}
bool BST::search(int val)
{
	TreeNode* newnode = root;
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		TreeNode* parent, *location;
		parent = location = root;
		while (val != parent->getdata() && location != NULL)
		{
			parent = location;
			if (val < parent->getdata())
			{
				location = parent->getleft();
			}
			else
			{
				location = parent->getright();
			}
		}
		if (val == parent->getdata())
		{
			return 1;
		}
	}
	return 0;
}
TreeNode* BST::getRoot()const
{
	return root;
}
void BST::inOrderTrvaversal()
{
    inOrderTrvaversal(getRoot());
}
void BST::inOrderTrvaversal(TreeNode* node)
{
	if (node != NULL)
	{
		inOrderTrvaversal(node->getleft());
		cout << node->getdata() << " ";
		inOrderTrvaversal(node->getright());
	}
}
void BST::postOrderTraversal()
{
	postOrderTraversal(getRoot());

}
void BST::postOrderTraversal(TreeNode* node)
{
	if (node != NULL)
	{
		postOrderTraversal(node->getleft());
		postOrderTraversal(node->getright());
		cout << node->getdata() << " ";	
	}
}
void BST::preOrderTraversal()
{
	preOrderTraversal(getRoot());
}
void BST::preOrderTraversal(TreeNode* node)
{
	if (node != NULL)
	{
		cout << node->getdata() << " ";
		preOrderTraversal(node->getleft());
		preOrderTraversal(node->getright());
	}
}
void BST::DeleteNode(int val)
{
	TreeNode* parent,*loc;
	parent=loc=root;
	if(loc->getdata()==val)
		{
			loc=root;
		}
		else if(loc->getdata()<val)
		{
			loc=loc->getright();
		}
		else
		{
			loc=loc->getleft();
		}
	while(loc)
	{
		if(loc->getdata()==val)
		{
			break;
		}
		else if(loc->getdata()<val)
		{
			parent=loc;
			loc=loc->getright();
		}
		else
		{
			parent=loc;
			loc=loc->getleft();
		}
	}
	if(loc)
	{
		if(parent->getleft()->getdata()==val&&loc->getright()==NULL)
		{
	    	parent->setleft(loc->getleft());
		}
		else if(parent->getright()->getdata()==val&&loc->getleft()==NULL)
		{
		    parent->setright(loc->getright());
		}
		else
		{
			 /*TreeNode* temp=loc->getright();
			if(parent->getright()->getdata()==val)
			{
			   temp->setleft(loc->getleft());
			   parent->setright(temp);
			}
			else
			{
				temp->setleft(loc->getleft());
				 parent->setleft(temp);
			}*/


			TreeNode* temp=loc->getright();
			TreeNode* child=temp->getleft();
			TreeNode* p=temp;
			while(child)
			{
				p=child;
				child=child->getleft();
				if(child)
				{
					temp=temp->getleft();
				}
			}
			loc->setdata(p->getdata());
			if(p->getright()!=NULL)
			{
				temp->setleft(p->getright());
			}
			else
			{
				temp->setleft(NULL);
			}
			loc=p;
		}	
		delete loc;
    }
}
void BST::CountLeafNode()const
{
	int count=0;
	TreeNode* node=getRoot();
	queue<TreeNode*> q;
	q.push(node);
	while(!q.empty())
	{
		TreeNode* temp=q.front();
		q.pop();
		if(temp->getleft()!=NULL)
		{
			q.push(temp->getleft());
		}
		if(temp->getright()!=NULL)
		{
			q.push(temp->getright());
		}
		if(temp->getleft()==NULL&&temp->getright()==NULL)
		{
			count++;
		}
	}
	cout<<"There are "<<count<<" Leaf nodes in given BST."<<endl;
}