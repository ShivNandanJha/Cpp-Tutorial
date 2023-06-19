  //todo: Given two linked list , tell if they are equal or not.
  //⁡⁢⁣⁣two linked list are equal if they have the same data and the arrangement are also the same⁡
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

bool checkEqualLinkedList(Node *head1, Node *head2){
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->value!=ptr2->value){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1 == NULL && ptr2 == NULL);
}

int main()
{
    Linkedlist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    Linkedlist ll2;
    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.insertAtTail(4);
    ll2.insertAtTail(5);
    ll2.insertAtTail(7);
    ll1.display();
    ll2.display();
    cout << checkEqualLinkedList(ll1.head, ll2.head) << endl;
}