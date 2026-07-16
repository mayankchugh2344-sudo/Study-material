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

void insertionTakeInput(int& n1,int &data1){
cout<<"Enter the position for node to  insert";
cin>>n1;
cout<<"Enter the data for node";
cin>>data1;
};

void insertDLL(int&n1,int &data1,Node*&head){
    Node*newNode=new Node(data1);
    Node*curr=head;

for(int i=0;i<n1-1&&curr!=NULL;i++){
curr=curr->next;
}
newNode->next=curr->next;
newNode->prev=curr;

 if (curr->next != NULL)
        curr->next->prev = newNode;

    curr->next = newNode;

};

int main(){
    int n,n1;
    int data[n],data1;
    Node*head=NULL;
    Node*tail=NULL;
    takeInput(n,data);
    createDoublyLL(n,data,head,tail);
display(head);
insertionTakeInput(n1,data1);
insertDLL(n,data1,head);
display(head);
    return 0;
}