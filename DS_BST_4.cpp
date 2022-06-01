//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//BST Breadth First Search

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

void levelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
        q.pop();
    }
}

int main(){
    Node* root=NULL;
    root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

    levelOrder(root);
}