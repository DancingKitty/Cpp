// Linked-List : Inserting Node at Nth Position

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void Insert(int n, int x){
    Node* temp1=new Node();
    temp1->data=x;
    temp1->next=NULL;

    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }

    Node* temp2=head;
    for(int i=0; i<(n-2); i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}

void PrintList(){
    Node* temp=head;
    cout<<"Linked List is : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Insert(2,1);
    Insert(3,2);
    Insert(5,1);
    Insert(4,2);
    PrintList();
}