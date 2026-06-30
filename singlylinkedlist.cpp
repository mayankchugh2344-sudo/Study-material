#include <iostream>
using namespace std;

// Node class
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

// Function to display the linked list
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
    // Create the first node
    Node* head = new Node(10);

    // Create the second node
    Node* second = new Node(20);

    // Connect first node to second
    head->next = second;

    // Create the third node
    Node* third = new Node(30);

    // Connect second node to third
    second->next = third;

    // Display the linked list
    cout << "Linked List: ";
    display(head);

    return 0;
}