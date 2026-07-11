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

// Display linked list
void display(Node* head)
{
    Node* curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << endl;
}

// Take input
void takeInput(int &n, int data[])
{
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the data for nodes:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
}

// Insert at tail
void linkedListCreation(Node* &head, Node* &tail, int data)
{
    Node* newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    int n;
    int data[n];     

    Node* head = NULL;
    Node* tail = NULL;

    takeInput(n, data);

    for (int i = 0; i < n; i++)
    {
        linkedListCreation(head, tail, data[i]);
    }

    cout << "Linked List: ";
    display(head);

    return 0;
}