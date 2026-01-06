#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

int length(Node*head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
     Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

      head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout<<length(head);



}