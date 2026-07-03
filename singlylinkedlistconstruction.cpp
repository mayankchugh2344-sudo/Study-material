#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    // Constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Display Linked List
void display(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);

    head->next = second;

    display(head);

    return 0;
}