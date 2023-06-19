#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given the head of a linked list , delete every alternate element from the list starting from the second element

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

void deleteAlternate(Node *&head)
{
    Node *current = head;

    while (current != NULL && current->next != NULL)
    {
        Node *temp = current->next;
        current->next = current->next->next;
        free(temp);
        current = current->next;
    }
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
    deleteAlternate(ll.head);
    ll.display();
}