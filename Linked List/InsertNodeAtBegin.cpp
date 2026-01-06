#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    
    Node(int value){
        data=value;
        next=NULL;

    }
};

void Traversing(Node*head){
    Node* temp=head;
    while (temp!=NULL)
    {
       cout << temp->data << " ";
        temp = temp->next;
    }
     cout << "Null";
    
}

void insertbeginNode(Node* &head,int val){
    Node *Newnode=new Node(0);
    Newnode->data=val;
    Newnode->next=head;
    head=Newnode;
}

int main(){
    Node*head=new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next=second;
    second->next=third;
    
    Traversing(head);
    cout<<endl;
    insertbeginNode(head,0);
    Traversing(head);

}