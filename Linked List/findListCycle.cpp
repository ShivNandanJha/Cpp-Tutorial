

  // todo: Given head, the head of a linked list , determine if the linked list has cycle in it or not
//?? Slow fast pointer Approach

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Node class represents a node in the linked list
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

// Linkedlist class represents a singly linked list
class Linkedlist
{
public:
    Node *head;

    Linkedlist()
    {
        head = NULL;
    }

    // Insert a new node at the tail of the linked list
    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);

        // If the list is empty, make the new node the head
        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node *temp = head;

        // Traverse to the end of the list
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // Append the new node at the end
        temp->next = new_node;
    }

    // Display the elements of the linked list
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

// Merge two sorted linked lists into one sorted linked list

bool detectCycle(Node* head){
    Node *slow = head;
    Node *fast = head;

    if(!head){
        return false;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout << "At value " << slow->value << endl;
            return true;
        }
    }
    return false;
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
   ll.insertAtTail(7);
   ll.insertAtTail(7);
   ll.insertAtTail(8);
   ll.display();
   ll.head->next->next->next->next->next->next->next->next = ll.head->next->next->next->next;
   if(detectCycle(ll.head)==true){
        cout << "True" << endl;
   }
   else{
        cout << "False" << endl;
   }


   return 0;
}
