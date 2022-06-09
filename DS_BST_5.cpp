//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//BST Preorder Inorder Postorder Traversal

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
};

Node* newNode(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

Node* Insert(Node* root, int x){
    if(root==NULL) root=newNode(x);
    else if(x<=root->data) root->left=Insert(root->left,x);
    else root->right=Insert(root->right,x);
    return root;
}

void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;
    root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
}