#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 𝐍͟𝐨͟𝐝͟𝐞 𝐜͟𝐥͟𝐚͟𝐬͟𝐬 𝐟͟𝐨͟𝐫 ͟𝐚 𝐬͟𝐢͟𝐧͟𝐠͟𝐥͟𝐲 𝐥͟𝐢͟𝐧͟𝐤͟𝐞͟𝐝 𝐥͟𝐢͟𝐬͟𝐭
class node
{
public:
    int value;
    node *next;

    node(int data)
    {
        value = data;
        next = NULL;
    }
};

// ⁡⁢⁢⁢insertion of element at head;⁡
void insertAtHead(node *&head, int value)
{
    // Creating a new node
    node *new_node = new node(value);
    // Setting the next of new node to the current head
    new_node->next = head;
    // Updating head to point to the new node
    head = new_node;
}

// ⁡⁢⁢⁢deleting a node at start⁡
void deleteStart(node *&head)
{
    node *temp = head; // node to be deleted
    head = head->next;
    free(temp); // inbuilt function of deletion
}

// ⁡⁢⁢⁢inserting a node in singly linked list at the ending⁡
void insterAtEnd(node *&head, int value)
{
    // Creating a new node
    node *new_node = new node(value);
    // Traversing to the last node in the list
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // Setting the next of last node to the new node
    temp->next = new_node;
}

        // ⁡⁢⁢⁡⁢⁢⁢deleting a node at the end⁡
      
 void deleteEnd(node *&head){
    node *second_last = head;
    while(second_last->next->next!= NULL){
        second_last = second_last->next;
    }
    node *temp             = second_last->next;
         second_last->next = NULL;
         free(temp);
    }

   // ⁡⁢⁢⁢inserting a node at kth position⁡
 
void insterAt_K_position(node *&head, int value, int pos)
{
    if (pos == 0)  // If position is 0, insert at head
    {
        insertAtHead(head, value);
        return;
    }
    // Creating a new node
    node *new_node = new node(value);
    // Traversing to the node at pos-1 position
    node *temp = head;
    int cur_pos = 0;
    while (cur_pos != pos - 1)
    {
        temp = temp->next;
        cur_pos++;
    }
    // Setting the next of new node to the node at pos position
    new_node->next = temp->next;
    // Setting the next of node at pos-1 position to the new node
    temp->next = new_node;
}
  // ⁡⁢⁢⁢deleting node at kth position⁡

void deleteAtPosition(node *&head, int pos){

    if (pos == 0)  // If position is 0, delete at head
    {
        deleteStart(head);
        return;
    }
    node *prev   = head;
    int  cur_pos = 0;
    while (cur_pos != pos-1)
    {
        prev = prev->next;
        cur_pos++;
    }

    node *temp  = prev -> next;
         prev-> next= prev->next->next;
         free(temp);
}

// ⁡⁢⁢⁢updating node at kth position⁡
// Traversing to the node at k position and updating its value
void updatePosition(node *head, int pos, int value)
{
    node *temp = head;
    int cur_pos = 0;
    while (cur_pos != pos)
    {
        temp = temp->next;
        cur_pos++;
    }
    // Setting the value of node at k position to the new value
    temp->value = value;
}



//⁡⁢⁢⁢ Displaying the linked list⁡
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    // Creating an empty linked list
    node *head = NULL;
    // Inserting elements at the head of the linked list
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    // Inserting an element at the end of the linked list
    insterAtEnd(head, 3);
    display(head);
    // Inserting an element at a specific position in the linked list
    insterAt_K_position(head, 4, 2);
    display(head);
    // Updating an element at a specific position in the linked list
    updatePosition(head, 3, 5);
    display(head);

      // deleting a node at start
    deleteStart(head);
    display(head);
    // deleting a node at end
    deleteEnd(head);
    display(head);
    deleteAtPosition(head, 1);
    display(head);
}
