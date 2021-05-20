
/*

========================================
=       Deletion in Linked List        =
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
    if (head==0 || head->data==-1){
        cout<<"NULL"<<endl;
        return;
    }
    //if (head->data == -1)
     //   cout<<"NULL";
    else{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
}

// === delete the first node ====
Node *deleteAtBeg(Node *head){
    if(head->data==-1){
        return head;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}

// ==== delete at last ====
Node *deleteAtEnd(Node *head){
    Node *pre;
    Node *temp;
    temp = head;
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return NULL;
    }

    while(head->next!=NULL){
        pre = head;
        head = head->next;
    }
    pre->next = NULL;
    return temp;
}

// ==== main function ====
int main(){
    int inp=0;
    Node *head = new Node(-1); // head node initialization
    Node *ptr = head;

    // = = = = input of the Linked List = = = =
    while(inp!=-1){
        cout<<"Enter element of linked list(-1 to exit) ";
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
    head = deleteAtBeg(head);
    printLL(head);
    //head = deleteAtEnd(head);
    //printLL(head);

return 0;
}


