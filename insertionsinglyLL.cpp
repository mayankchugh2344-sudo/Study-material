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

void nayaTakeInput(int &data1,int& pos){

cout<<"enter the data for node you want to add";
cin>>data1;
cout<<"Enter the pos you want to insert node from head";
cin>>pos;
}

void insertionNode(Node* &head, int data1, int pos)
{
    if(pos == 1)
    {
        Node* naya = new Node(data1);
        naya->next = head;
        head = naya;
        return;
    }

    Node* curr = head;

    for(int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }

    if(curr == NULL)
    {
        cout << "Invalid Position";
        return;
    }

    Node* naya = new Node(data1);

    naya->next = curr->next;
    curr->next = naya;
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
    Node*naya=NULL;
    cout<<"Enter the node naya val and position you want to insert\n";
int data1;
    int pos;
    nayaTakeInput(data1,pos);
    insertionNode(head,data1,pos);
    display(head);
    return 0;
}