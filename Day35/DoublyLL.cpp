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
    if(head->data==-1){
        cout<<"NULL";
    }
    else{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL";
}
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

return 0;
}
