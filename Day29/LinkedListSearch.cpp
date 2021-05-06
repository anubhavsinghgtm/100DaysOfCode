/*

========================================
=   Searching in singly linked list    =
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


// = = = = Search function in linked list = = = =

int searchLL(Node *head, int ele){
    int pos=1;
    while(head!=NULL){
        if(head->data==ele){
            return pos;
        }
        else{
            pos++;
            head = head->next;
        }
    }
    return -1;
}

// = = = =  Recursive search  = = = =

int searchLLR(Node *head, int ele){
    if(head==NULL) return -1;

    if(head->data==ele) return 1;

    else{
        int res = searchLLR(head->next, ele);
        if(res==-1) return -1;
        else return (res+1);
    }
}

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


    int ele;
    cout<<"Enter element to search: ";
    cin>>ele;


    // iterative search in linked list
    int ans1 = searchLL(head,ele);
    if(ans1==-1) cout<<"Element not found"<<endl;
    else cout<<"Element is at "<<ans1<<" position"<<endl;


    //recursive search in linked list
    int ans2 = searchLLR(head, ele);
    if(ans2==-1) cout<<"Element not found"<<endl;
    else cout<<"Element is at "<<ans2<<" position"<<endl;
    //  = = =  search conditions = = =


return 0;
}

