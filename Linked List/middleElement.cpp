#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo:Find the middle element of the given linked list
//?? slow Fast pointer Approach



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

Node *findMidElement(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);

    // ll1.insertAtTail(2);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);

    ll1.display();
    Node *MidElement = findMidElement(ll1.head);
    cout << "Middle Element: "<< MidElement->value << endl;

    return 0;
}
