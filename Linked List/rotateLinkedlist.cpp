#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given the head of a linked list, rotate the list to the right by k places
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

Node *rotateList(Node *&head, int k){
if(head==NULL || head->next==NULL)\
            return head;
        Node* slow=head;
        Node* fast=head;
        int cnt=0;
        while(slow!=NULL)
        {
            cnt++;
            slow=slow->next;
        }
        k=k%cnt;
        slow=head;
        for(int i=0;i<k;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
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
    ll.head= rotateList(ll.head, 5);
    ll.display();
    return 0;
}



    // ​‌‌‌explaination ​


    /* 
  ⁡⁣⁢⁣The given code is an implementation of a function that rotates a linked list to the right by k positions.

Here's a step-by-step explanation of the code:

1. The function takes a pointer to the head of the linked list as input.

2. The first condition checks if the linked list is empty (head == NULL) or if it contains only one node (head->next == NULL). In either case, there is no need to rotate the list, so the function returns the head as it is.

3. Two pointers, `slow` and `fast`, are initialized to the head of the linked list. These pointers will be used to find the positions for rotation.

4. A counter variable, `cnt`, is initialized to 0. This counter will be used to count the number of nodes in the linked list.

5. The while loop iterates through the linked list using the `slow` pointer and counts the number of nodes in the list by incrementing `cnt` for each node.

6. After the loop, the value of `cnt` represents the total number of nodes in the linked list.

7. Since rotating the list by its own length or multiples of its length results in the same list, the value of `k` is reduced by taking the modulo (`k = k % cnt`). This ensures that `k` is within the range of the list length.

8. The `slow` pointer is reset to the head of the linked list for the next traversal.

9. Another for loop is used to move the `fast` pointer `k` positions ahead in the linked list. This positions the `fast` pointer at the node from where the rotation needs to begin.

10. Now, the `slow` and `fast` pointers are moved together until the `fast` pointer reaches the last node (fast->next != NULL). This ensures that the `slow` pointer is positioned at the node just before the new head of the rotated list.

11. Once the above loop completes, the `fast` pointer is pointing to the last node of the original list, and the `slow` pointer is at the node just before the new head.

12. The next step is to perform the rotation. The `next` pointer of the last node (fast->next) is set to point to the original head of the list, effectively making it a circular list.

13. The `head` pointer is updated to point to the node next to `slow`, which becomes the new head of the rotated list.

14. The `next` pointer of `slow` is set to NULL, breaking the circular linkage and completing the rotation.

15. Finally, the function returns the updated `head` pointer, which now points to the rotated list.

Overall, the code counts the number of nodes in the linked list, determines the rotation position, adjusts the pointers accordingly, performs the rotation, and returns the updated head pointer of the rotated list.

⁡



*/



