
/*

=====================================================
=      Print Nth from the End of Linked List        =
=====================================================


== CASE - 1:
if n>lenght(linkedlist)
output - nothing

== CASE - 2:
if n<=length(linkedlist)
output - data of nth node


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


// ==== Data of nth node of Linked List ===
void printNth(Node *head, int n){

    Node *temp = head; // a temporary node

    for(int i=0; i<n; ++i){
        if(temp==NULL) return;  // if linked list is smaller than n
        temp=temp->next;
    } // to travel the temp node nth ahead first

    Node *ptr = head; // a ptr pointer to reach the required position

    while(temp!=NULL){
        temp= temp->next;
        ptr = ptr->next;
    } // temp will be at last and ptr will be at required position
    cout<<ptr->data<<endl; // required output
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
    printNth(head,2);
return 0;
}


