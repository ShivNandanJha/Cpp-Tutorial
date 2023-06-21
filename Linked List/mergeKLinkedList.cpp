

//todo:You are given an array of k linked list, each linked list is sorted in ascending order. Merge them  merge in one sorted linked list and return it

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
Node *mergeSortLL(Node *&head1, Node *&head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *dummyNode = new Node(-1);
    Node *ptr3 = dummyNode;

    // If one of the lists is empty, return the other list
    if (ptr1 == NULL)
    {
        return ptr2;
    }
    if (ptr2 == NULL)
    {
        return ptr1;
    }

    // Merge the two lists by comparing node values
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->value < ptr2->value)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    // If any list has remaining elements, append them to the merged list
    if (ptr1 != NULL)
    {
        ptr3->next = ptr1;
    }
    if (ptr2 != NULL)
    {
        ptr3->next = ptr2;
    }

    // Return the head of the merged sorted list
    return dummyNode->next;
}


// Node* mergeKLists(vector<Node*>& v) {
//         if (v.size() == 0) return NULL;
//         else if (v.size() == 1) return v[0];
//         for (int i = 1; i < v.size(); i++) {
//             v[0] = mergeSortLL(v[0], v[i]);
//         }
//         return v[0];
//     }

Node* mergeKLists(vector<Node*> &lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
    Node* mergedHead = mergeSortLL(lists[0], lists[1]);
    lists.push_back(mergedHead);
    lists.erase(lists.begin());
    lists.erase(lists.begin());
    }

    return lists[0];
}

int main()
{
    Linkedlist ll1, ll2,ll3;
    ll1.insertAtTail(1);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);

    ll2.insertAtTail(2);
    ll2.insertAtTail(5);
    ll2.insertAtTail(6);
    ll3.insertAtTail(8);
    ll3.insertAtTail(10);
    ll3.insertAtTail(12);

    ll1.display();
    ll2.display();
    ll3.display();

   // Create a vector of Node* to store the linked lists
    vector<Node*> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    // Merge the linked lists
    Node* mergedList = mergeKLists(lists);

    // Display the merged list
    cout << "Merged list: ";
    Node* temp = mergedList;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
