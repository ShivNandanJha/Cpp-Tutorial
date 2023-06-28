#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: Given the head of a Linked list, determine if the linkedlist is a palindrome or not

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next  = NULL;
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


bool isPalindrome(Node * &head) {
      // Find middle element
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

      // Reverse second half of linked list
    Node *curr      = slow->next;
         slow->next = NULL;
    Node *prev      = slow;
  
    while (curr) { 
        Node *next      = curr->next;
             curr->next = prev;
             prev       = curr;
             curr       = next;
    }

      // Compare both linked lists
    Node *head1 = head;
    Node *head2 = prev;

    while (head2) {
        if (head1->value != head2->value) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}


int main()
{
    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(4);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    /* ll.insertAtTail(1); */
    ll.display();
    cout<<isPalindrome(ll.head);


    return 0;
}