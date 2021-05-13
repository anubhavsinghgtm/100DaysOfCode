
/*

========================================
=      Find Middle in Linked List        =
========================================


== CASE - 1:
input - NULL
output - 0

== CASE - 2:
input - 2 nodes
output - 2nd node data


== CASE - 3
input - 3 nodes
output - 2nd node data


== CASE - 4
input - 4 nodes
output - 3rd node data

*/

#include<iostream>

using namespace std;


// = = = =  Node Structure  = = = =
struct Node{
    int data;
    Node *next;

    Node(int x){
    data = x;
    next = NULL;
    }
};


// = = = =  print function for linked list  = = = =

void printLL(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}


// ==== Data of Middle of Linked List ===
int middleOfLL(Node *head){
    if(head->data==-1) return NULL;
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next; // to jump to the last
        slow = slow->next; // to jump to the middle
    }
    return slow->data;

}


// ==== main function ====
int main(){
    int inp=0;
    Node *head = new Node(-1); // head node initialization
    Node *ptr = head;

    // = = = = input of the Linked List = = = =
    while(inp!=-1){
        cout<<"Enter element of linkedlist(-1 to exit)"<<" ";
        cin>>inp;
        if(inp==-1)
            break;
        if(head->data==-1){
            head->data=inp;
            head->next=NULL;
            ptr = head;
        }
        else{
            Node *temp = new Node(inp);
            ptr->next = temp;
            temp->next = NULL;
            ptr = temp;

        }
    }

    printLL(head); // print linked list
    int mid = middleOfLL(head);
    cout<<mid<<endl;
return 0;
}


