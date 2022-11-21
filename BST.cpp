#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int val){
			this->data=val;
			this->left=NULL;
			this->right=NULL;
		}
};
void inorder(Node* &root){
	//LNR
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
Node* insertIntoBST(Node* &root,int d){
	//base case
	if(root==NULL){
		root=new Node(d);
		return root;
	}
	// if d>root -->right part
	if(d> root->data){
		root->right=insertIntoBST(root->right,d);
	}
	else{
		root->left=insertIntoBST(root->left,d);
	}
}
void takeInput(Node* &root){
	int data;
	cin>>data;
	while(data!=-1){
		insertIntoBST(root,data);
		cin>>data;
	}
}
bool search(Node* &root,int d){
	if(root==NULL){
		return false;
	}
	if(root->data==d){
		return true;
	}
	//else
	if(root->data >d){
		return insertIntoBST(root->left,d);
	}
	else{
		return insertIntoBST(root->right,d);
	}
}
Node* deletion(Node* root,int val){
	//0 child
	if(root->left==NULL && root->right==NULL){
		delete root;
		return NULL;
	}
	//1 child
	 //left node only
	 if(root->left!=NULL && root->right==NULL){
	 	Node* temp=root->left;
	 	delete root;
	 	return temp;
	 	
	 }
	 //right node only
	 if(root->right!=NULL && root->left==NULL){
	 	Node* temp=root->right;
	 	delete root;
	 	return temp;
	 	
	 }
	 //2 child
	  //replace the parent with min(root->right) or max(root->left)
	  
}
int main(){
	Node* root=NULL;
	int d;
	cout<<"Enter data to create BST({-1} to terminate)"<<endl;
	takeInput(root);
	cout<<"Enter the element for searching "<<endl;
	cin>>d;
	if(search(root,d)){
		cout<<"The element is present in the tree "<<endl;
	}
	else{
		cout<<"The element is not present in the tree "<<endl;
	}
}
