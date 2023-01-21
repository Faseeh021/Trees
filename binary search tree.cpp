#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node * right;
  
  node(int d)
  {
  	this->data=d;
  	this->left=NULL;
  	this->right=NULL;
  	
   }	
};

node * insertBST(node * &root, int d)
{
	if (root==NULL)
	{
		root= new node(d);
		return root;
	}
	if (d>root->data)
	{
		root->right=insertBST(root->right,d);
	}
	else 
	{
		root->left=insertBST(root->left,d);
	}
	return root;
}

void values(node* &root){
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	int i;
	cout<<"enter i"<<endl;
	cin>>i;
	while(i<size)
	{
	 insertBST(root, i);
	 	i++;
	}
	
	}
/*	void values(node* &root)
{
	cout << "enter data for BST: " << endl;
	int d;
	cin >> d;
	while (d != -1)
	{
		insertBST(root,d);
		cin >> d;
	}
}
*/	
node * Inorder(node * &root)
{
	if (root==NULL)
	{
		return NULL;
	}
	
	Inorder(root->left);
	cout<<root->data<<endl;
	Inorder(root->right);
	
    return root;
}	



int main()
{
	node *root=NULL;
	values(root);
	cout<<"Inorder"<<endl;
	Inorder(root);
}
	
	
	
	
	
	
	
	
	
	
	
	
	