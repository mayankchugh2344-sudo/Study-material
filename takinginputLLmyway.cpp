#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node*next;

Node(int val){
data=val;
next=NULL;
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

void createLinkedList(Node*&head,int n,int data[]){
    Node*node[n];
for(int i = 0; i < n; i++){
    node[i] = new Node(data[i]);
}

for(int i = 0; i < n - 1; i++){
    node[i]->next = node[i + 1];
}
node[n-1]->next=NULL;
//update head
head=node[0];


};


int main(){
  int n,n1;
  int data[n];
  takeInput(n,data);
  Node*head=NULL;
  createLinkedList(head,n,data);
   Node*node[n];
  display(head);
 
return 0;
}