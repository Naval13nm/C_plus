#include <bits/stdc++.h>
using namespace std;

// Node structure
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    // creting nodes
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // Linking Nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next=NULL;

    // Traversing Linked list
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "Null";

    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node *next;
    
//     Node(int value){
//         data=value;
//         next=NULL;

//     }
// };

// void Traversing(Node*head){
//     Node* temp=head;
//     while (temp!=NULL)
//     {
//        cout << temp->data << " ";
//         temp = temp->next;
//     }
//      cout << "Null";
    
// }

// int main(){
//     Node*head=new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);

//     head->next=second;
//     second->next=third;
    
//     Traversing(head);
// }