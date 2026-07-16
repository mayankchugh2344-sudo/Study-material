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

int main(){
    int n;
    int data[n];
    Node*head=NULL;
    Node*tail=NULL;
    takeInput(n,data);
    createDoublyLL(n,data,head,tail);
display(head);
    return 0;
}