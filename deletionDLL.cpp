#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node*next;
Node*prev;

//constructor
Node(int val){
data=val;
next=NULL;
prev=NULL;
}
};

void display(Node*head){
  while(head!=NULL){

cout<<head->data<<" ";
head=head->next;
  }
cout<<endl;
};

void takeInput(int& n,int data[]){
cout<<"Enter the number of nodes";
cin>>n;
cout<<"Enter the data for nodes";
for(int i=0;i<n;i++){
cin>>data[i];
}
};

void createDoublyLL(int&n,int data[],Node*&head,Node*&tail){
Node*nodes[n];
for(int i=0;i<n;i++){
nodes[i]=new Node(data[i]);
}

    // Connect Nodes
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            nodes[i]->prev = NULL;
        else
            nodes[i]->prev = nodes[i - 1];

        if(i == n - 1)
            nodes[i]->next = NULL;
        else
            nodes[i]->next = nodes[i + 1];
    }

    head = nodes[0];
    tail = nodes[n - 1];
};

void deletionTakingInput(int &n1){
cout<<"Enter the position of node ,which you want to delete";
cin>>n1;
};

void deleteNode(int n1, Node *&head)
{
    if(head==NULL)
        return;

    Node *curr=head;

    // Move to the node to delete
    for(int i=1;i<n1 && curr!=NULL;i++)
    {
        curr=curr->next;
    }

    if(curr==NULL)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    // If deleting first node
    if(curr==head)
    {
        head=head->next;

        if(head!=NULL)
            head->prev=NULL;

        delete curr;
        return;
    }

    // Connect previous and next nodes
    if(curr->prev!=NULL)
        curr->prev->next=curr->next;

    if(curr->next!=NULL)
        curr->next->prev=curr->prev;

    delete curr;
}

int main(){
    int n,n1;
    int data[n];
    Node*head=NULL;
    Node*tail=NULL;
    takeInput(n,data);
    createDoublyLL(n,data,head,tail);
display(head);
deletionTakingInput(n1);
deleteNode(n1,head);
display(head);
    return 0;
}