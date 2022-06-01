//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//Bst Height Of Tree

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

int height(Node* root){
    if(root==NULL) return -1;
    return max(height(root->left), height(root->right)) + 1;
}

int main(){
    Node* root=NULL;
    root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

    int k = height(root);
    cout<<k;
}