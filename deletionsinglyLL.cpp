#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*next;

//constructor
Node(int val){
data= val;
next=NULL;
}
};

void display(Node*head){
    //Ek node create kiya jisme head ka address store hai
Node*curr=head;
while(curr!=NULL){
cout<<curr->data;
curr=curr->next;
}
cout<<endl;
};

void takeInput(int&n,int data[]){
cout<<"Enter the number of nodes";
cin>>n;
cout<<"Enter the data for nodes";
for(int i=0;i<n;i++){
cin>>data[i];
}
};

void createLinkedList(int n,int data[],Node*&head,Node*&tail){
Node*node[n];
//create node of data[i]
for(int i=0;i<n;i++){
node[i]=new Node(data[i]);
}
//now to join them
for(int i=0;i<n;i++){
node[i]->next=node[i+1];
}
node[n-1]->next=NULL;
//update head
head=node[0];
tail=node[n-1];
};

void deletionInput(int&n1){
cout<<"Enter the pos for node to delete";
cin>>n1;
};

void deleteNodes(Node* &head, Node* &tail, int n, int n1)
{
    Node* curr = head;

    if (n1 > n || n1 < 1)
    {
        cout << "Invalid position";
    }

    // Delete first node
    else if (n1 == 1)
    {
        Node* temp = head;
        head = head->next;
        delete temp;

        // If list becomes empty
        if (head == NULL)
            tail = NULL;
    }

    // Delete last node
    else if (n1 == n)
    {
        while (curr->next != tail)
        {
            curr = curr->next;
        }

        curr->next = NULL;
        delete tail;
        tail = curr;
    }

    // Delete middle node
    else
    {
        cout << "Position is in middle" << endl;

        // Move curr to node before the one to delete
        for (int i = 1; i < n1 - 1; i++)
        {
            curr = curr->next;
        }

        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
}
int main(){
int n,n1;
int data[n];
Node*head=NULL;
Node*tail=NULL;
Node*curr=NULL;
takeInput(n,data);
createLinkedList(n,data,head,tail);
display(head);
deletionInput(n1);
deleteNodes(head,tail,n,n1);
display(head);
return 0;
}