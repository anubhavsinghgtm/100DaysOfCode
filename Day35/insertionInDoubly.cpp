/*

==============================================
=    Node insertion in Doubly Linked List    =
==============================================

*/

#include<iostream>

using namespace std;


struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
    data = x;
    next = NULL;
    prev = NULL;
    }
};

void printLL(Node *head){
    if(head->data==-1){
        cout<<"NULL"<<endl;
    }
    else{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
}


Node *insertAtBeg(Node *head, int ele){
    Node *nn = new Node(ele);
    if(head->data==-1) return nn;
    head->prev = nn;
    nn->next = head;
    return nn;
}

Node *insertAtEnd(Node *head, int ele){
    Node *nn = new Node(ele);
    Node *temp = head;
    if(head->data==-1) return nn;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = nn;
    nn->prev = temp;
    return head;
}

int main(){
Node *head = new Node(-1);
Node *temp= head;
int inp=0;
while(inp!=-1){
    cout<<"Enter the data(-1 to exit): ";
    cin>>inp;
    if(inp==-1) break;
    Node *nn = new Node(inp);
    if(head->data==-1){
        head = nn;
    }
    temp->next=nn;
    nn->prev = temp;
    temp = temp->next;
}
int ele;
cout<<"Input data you want to insert(-1 for nothing): ";
cin>>ele;
printLL(head);
if(ele!=-1)
//head = insertAtBeg(head, ele);
head = insertAtEnd(head, ele);
printLL(head);

return 0;
}
