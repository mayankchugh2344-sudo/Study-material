

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtPosition(Node* &head, int val, int pos)
{
    // Insert at beginning
    if(pos == 1)
    {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to (pos-1)th node
    for(int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Invalid position
    if(temp == NULL)
    {
        cout << "Invalid Position!" << endl;
        return;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}

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
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Before Insertion: ";
    display(head);

    insertAtPosition(head, 25, 3);

    cout << "After Insertion: ";
    display(head);

    return 0;
}