#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void display(Node* head)
{
    Node* curr = head;

    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }

    cout << endl;
}

void takeInput(int &n, int data[])
{
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node data:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
}

void createDoublyLinkedList(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    int data[n];

    cout << "Enter node data:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++)
    {
        createDoublyLinkedList(head, tail, data[i]);
    }

    cout << "Doubly Linked List:\n";
    display(head);

    return 0;
}
