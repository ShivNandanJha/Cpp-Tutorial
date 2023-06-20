// todo: Given the head of a linked list , remove the k-th node from the end of the list and returns it head.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

class Linkedlist
{
public:
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }

    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};



// void removeKthNode(Node*&head, int k){
//     Node *ptr1 = head;
//     Node *ptr2 = head;
//   //move ptr2 forward by k steps
// int count = k;
// while(count--){
//         ptr2 = ptr2->next;
// }
// if(ptr2==NULL){
//         //if ptr2 is at NULL,ptr1 will be at head, so we have to delete the head.
//         Node *temp = head;
//              head  = head->next;
//              free(temp);
//              return;
// }
// while(ptr2->next!=NULL){ // when ptr2 is at null, ptr1 will be at node to be deleted
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
// }
// Node *temp      = ptr1->next;
//      ptr1->next = ptr1->next->next;
//      free(temp);
// }


Node* removeKthNode(Node *head, int k){
    Node *ptr1 = head;
    Node *ptr2 = head;

    // Move ptr2 forward by k steps
    while(k--){
        ptr2 = ptr2->next;
    }

    // If ptr2 is NULL, ptr1 will be at the head, so we have to delete the head
    if(ptr2 == NULL){
        return head->next;
    }

    // Traverse the list until ptr2 is at the last node
    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // ptr1 will be pointing to the node just before the k-th node from the end
    ptr1->next = ptr1->next->next;
    return head;
}

int main()
{
    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    
    // Call removeKthNode to remove the k-th node from the end of the list
    int k = 3; // Example: Remove the 3rd node from the end
    ll.head = removeKthNode(ll.head, k);

    ll.display(); // Display the modified list

    return 0;
}
