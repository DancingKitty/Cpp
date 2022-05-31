//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//BST Maximum Minimum

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

int minNode(Node* root){
    if(root==NULL) return -1;
    else if(root->left==NULL) return root->data;
    return minNode(root->left);
}

int maxNode(Node* root){
    if(root==NULL) return -1;
    else if(root->right==NULL) return root->data;
    return maxNode(root->right);
}

int main(){
    Node* root=NULL;
    root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

    int k=minNode(root);
    cout<<"Minimum Node : "<<k<<"\n";
    int m=maxNode(root);
    cout<<"Maximum Node : "<<m<<"\n";
}