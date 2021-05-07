
/*

========================================
=      Insertion in Linked List        =
========================================

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

// = = = =  Insertion at Beginning  = = = =
Node *insertAtBeg(Node *head,int data){
    Node *ptr = new Node(data);
    if (head->data==-1){
        head = ptr;
    }

    else{
    ptr->next = head;
    head = ptr;
    }
    return head;
}

// = = = =  Insert at the end  = = = =
Node *insertAtEnd(Node *head, int data){

    Node *nn = new Node(data); // new node

    if(head->data==-1){
        head = nn;
    }

    else{
    while(head->next!=NULL){
        head = head->next;
    } // go to the last node



    head->next = nn;
    }
    return head;
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
    int newd;
    cout<<"Enter the data for the new node: ";
    cin>>newd;
    //head = insertAtBeg(head,newd); // node insertion at beginning
    //printLL(head); // print after insertion
    //head = insertAtEnd(head, newd); // node insertion at end
    //printLL(head);

return 0;
}

