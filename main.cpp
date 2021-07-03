#include"BINARY TREE.h"

int main()
{
char choice;
	int val;
	BST b;
	do
	{
		cout<<"\t ______________________________________________"<<endl;
		cout<<"\t|                ***MENUE***                   |"<<endl;
		cout<<"\t| I/i :: To insert in BST.                     |"<<endl;
		cout<<"\t| S/s :: To search Value.                      |"<<endl;
		cout<<"\t| D/d :: To delete Value.                      |"<<endl;
		cout<<"\t| P/p :: Post Order Traversal.                 |"<<endl;
		cout<<"\t| X/x :: Pre Order Traversal.                  |"<<endl;
		cout<<"\t| N/n :: In Oreder Traversal.                  |"<<endl;
		cout<<"\t| C/c :: To count number of leaf nodes in BST. |"<<endl;
		cout<<"\t| E/e ::  exit(0)                              |"<<endl;
		cout<<"\t ----------------------------------------------"<<endl;
		cout<<"choice= ";
		cin>>choice;
		switch(choice)
		{
		case 'I':case 'i':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			b.insert(val);
			break;
		case 'S':case's':
			cout<<"Enter value which you want to search: ";
			cin>>val;
			if(b.search(val))
			{
				cout<<"Value Found."<<endl;
			}
			else
				cout<<"Sorry! value not found."<<endl;
			break;
			case 'X':case 'x':
				b.preOrderTraversal();
				break;
		case'P':case'p':
		    b.postOrderTraversal();
			break;
		case'N':case'n':
		    b.inOrderTrvaversal();
			break;
		case 'D':case 'd':
			cout<<"Enter Value which you want to delete: ";
			cin>>val;
			b.DeleteNode(val);
			break;
		case 'A':case 'a':
			cout<<"Enter value which you want to insert: ";
			cin>>val;
			b.insert(val);
			break;
		case'E':case'e':
			break;
		case'C':case'c':
			b.CountLeafNode();
			break;
		default:
			cout<<"Sorry! Inavlid choice."<<endl;
			cout<<"Chose the appropriate choice."<<endl;
		}
	}
	while(choice!='E'&&choice!='e');
	system("pause");
}


