#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given the head of a sorted linked list, delete all the duplicate node such that each elements appears only once . Return the sorted linked list;


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



int main()
{ Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(4);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
     ll.insertAtTail(5);
    ll.display();

    return 0;
}