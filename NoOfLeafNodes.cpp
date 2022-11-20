#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int data){
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};
Node* tree(Node* root){
	int data;
	cout<<"Enter the data "<<endl;
	cin>>data;
	root = new Node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data on left side "<<endl;
	root->left=tree(root->left);
	cout<<"Enter the data on right side "<<endl;
	root->right=tree(root->right);
}
void inorder(Node* root,int &count){
	/* LNR */
	if(root==NULL){
		return;
	}
	inorder(root->left,count);
	// here we are not printing 
	if(root->left==NULL && root->right==NULL){
		count++;
	}
	inorder(root->right,count);
}
int noOfNodes(Node* root){
	int count=0;
	inorder(root,count);
	return count;
}
int main(){
	Node* root=NULL;
	root=tree(root);
	cout<<"The number of leaf Nodes are "<<noOfNodes(root)<<endl;
}
