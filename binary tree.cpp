#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int d)
	{
		this->data = d;
		this->left = NULL;
		this->right = NULL; 
	}
};

	Node* Inorder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		Inorder(root->left);
		cout << root->data << "  ";
		Inorder(root->right);
		
		return root;
	}
	
	Node* preOrder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		cout << root->data << "  ";
		preOrder(root->left);
		preOrder(root->right);
		
		return root;
	}
	Node* PostOrder(Node* root)
	{
		if(root == NULL)
		{
			return NULL;
		}
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->data << "  ";
		
		return root;
	}

int main()
{
	Node* root = new Node(10);
	root->left = new Node(15);
	root->right = new Node(10);
	root->left->right = new Node(20);
	cout << "InOrder" << endl;
	Inorder(root);
	cout << "\nPreOrder" << endl;
	preOrder(root);
	cout << "\nPost Order" << endl;
	PostOrder(root);
	
}