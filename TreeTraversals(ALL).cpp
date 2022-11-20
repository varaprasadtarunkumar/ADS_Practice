#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int data){
			this->left=NULL;
			this->right=NULL;
			this->data=data;
		}
};
Node* tree(Node* root){
	int data;
	cout<<"Enter the data(Enter {-1} to add data to the other side) "<<endl;
	cin>>data;
	root=new Node(data);
	
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for left of "<<data<<endl;
	root->left=tree(root->left);
	cout<<"Enter the data for right of "<<data<<endl;
	root->right=tree(root->right);
	return root;
}
void preorder(Node* root){
			/* NLR */
	//base case
	if(root==NULL){
		return;
	}
	cout<<root->data<<" "; // N
	preorder(root->left); // L
	preorder(root->right);// R
}
void inorder(Node* root){
	 /* LNR */
	//base case
	if(root==NULL){
		return;
	}
	inorder(root->left); // L
	cout<<root->data<<" "; // N
	inorder(root->right);// R
}
void postorder(Node* root){
 	/* LRN */
	//base case
	if(root==NULL){
		return;
	}
	postorder(root->left); // L
	postorder(root->right);// R
	cout<<root->data<<" "; // N
}
int main(){
	Node* root=NULL;
	root=tree(root);
	// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	cout<<"The inorder traversal is "<<endl;
	inorder(root);
	cout<<endl;
	cout<<"The preorder traversal is "<<endl;
	preorder(root);
	cout<<endl;
	cout<<"The postorder traversal is "<<endl;
	postorder(root);
	cout<<endl;
}
