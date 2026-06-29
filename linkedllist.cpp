#include<iostream>
#include<algorithm>
using namespace std;
class Node
{
public:
int val;
Node* next;
//Constructor
Node(int data){

    val=data;
    next=NULL;
}
// We have assigned null value to next pointer

};


//This function inserts new node at beginning of linked list
void insertAtHead(Node* &head,int val){
Node* new_node=new Node(val);
new_node->next=head;
head=new_node;
}
//This function inserts new node at end of linked list
void insertAtTail(Node* &head,int val){
Node* new_node=new Node(val);
Node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
//temp has reached the last node of linked list
temp->next=new_node;
}

//This function inserts new node at given position of linked list
void insertAtPosition(Node* &head,int pos,int val){
if(pos==0){
    insertAtHead(head,val);
    return;
}
Node* new_node=new Node(val);
Node* temp=head;
int current_position=0;
while(current_position!=pos-1){
    temp=temp->next;
    current_position++;
}
//temp is pointing to node at position pos-1
new_node->next=temp->next;
temp->next=new_node;
}

void deleteAtHead(Node* &head){
Node* temp=head;//node to be delted
head=head->next;
free(temp);
}   


void display(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->val<<" ->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}

void updateAtPosition(Node* &head,int k,int val){
Node* temp=head;
int current_position=0;
while(current_position!=k){
    temp=temp->next;
    current_position++;
}
//temp is pointing to node at position k
temp->val=val;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
display(head);
//Create a new node and insert it at head
insertAtHead(head,1);
display(head);
insertAtTail(head,3);
display(head);
insertAtPosition(head,1,4);
display(head);
updateAtPosition(head,2,5);
display(head);
   deleteAtHead(head);
   display(head);


    return 0;
}