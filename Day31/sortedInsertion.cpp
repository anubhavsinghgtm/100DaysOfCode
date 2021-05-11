#include<iostream>

using namespace std;


struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

void printLL(Node *head){
    if (head->data==-1) cout<<"NULL";
    else{
        while(head!=NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
    }
    cout<<"NULL"<<endl;

}


Node *sortedInsert(Node *head, int ele){

    Node *nn = new Node(ele); //new node creation

    if(head->data==-1) return nn; // if there is no node

    // if data of new node is smaller than head
    else if (ele<head->data)
    {
        nn->next = head;
        return nn;
    }

    Node *temp = head; // A temporary Node

    //if there is only one node and data of that node is smaller than new node...
    if(temp->next==NULL){
        head->next = nn;
        return head;
    }

    // loop to reach the required position
    while(temp->next!=NULL && temp->next->data < ele ){
        temp = temp->next;
    }

    // new node insertion
    nn->next = temp->next;
    temp->next = nn;
    return head;
}

int main(){

Node *head = new Node(-1); // head node initialization

head = sortedInsert(head,10);
printLL(head);
head = sortedInsert(head,15);
printLL(head);
head = sortedInsert(head,12);
printLL(head);
head = sortedInsert(head,1);
printLL(head);
head = sortedInsert(head,6);
printLL(head);
head = sortedInsert(head,200);
printLL(head);
head = sortedInsert(head,100);
printLL(head);
head = sortedInsert(head,30);
printLL(head);
head = sortedInsert(head,80);
printLL(head);
head = sortedInsert(head,50);
printLL(head);

return 0;
}
