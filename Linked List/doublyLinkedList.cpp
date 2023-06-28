#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " <=> ";
            temp = temp->next;
        }
        cout << endl;
    }
    // insert node at start
    void insertAtHead(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    // insert at tail
    void insertAtTail(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next     = new_node;
        new_node->prev = tail;
        tail           = new_node;
        return;
    }

//insert at Kᵗʰ position
       void insertAtK(int val, int k){
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        Node *temp = head;
        int  count = 1;
        while(count<(k-1)){
            temp = temp->next;
            count++;
        }
              //temp is pointing at node k-1
        new_node->next       = temp->next;
        temp->next           = new_node;
        new_node->prev       = temp;
        new_node->next->prev = new_node;
        return;
    }  
 
};

int main()
{

    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.insertAtHead(2);
    dll.insertAtHead(3);
    dll.display();

    cout << "insertion at tail\n";
    dll.insertAtTail(19);
    dll.insertAtTail(28);
    dll.insertAtTail(22);
    dll.display();
    cout << "insertion at k position "<< endl;
    dll.insertAtK(15, 4);
    dll.display();
    return 0;
}