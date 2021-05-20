/*

=============================================
=    Node creation in Doubly Linked List    =
=============================================

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
    if(head==0|| head->data==-1){
        cout<<"NULL"<<endl;
        return;
    }
    else{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
}

Node *deleteAtBeg(Node *head){
    if(head->next==NULL || head->data==-1) // if there is node <= 1
        return NULL;
    Node *temp = head->next;
    delete head;
    return temp;
}


Node *delelteAtEnd(Node *head){
    if(head->next==NULL || head->data==-1)
        return NULL;
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node *temp2 = temp->prev;
    temp2->next = NULL;
    delete temp;
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

printLL(head);
head = deleteAtBeg(head);
printLL(head);
head = delelteAtEnd(head);
printLL(head);
return 0;
}

