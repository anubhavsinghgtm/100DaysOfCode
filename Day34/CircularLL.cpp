/*




================================
=     Circular Linked List     =
================================





*/


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


printLL(Node *head){
    if(head->data==-1) {
        cout<<"NULL";
    }
    else{
    Node *temp= head;
    cout<<temp->data<<"->";
    temp = temp->next;
    while(temp!=head){
        cout<<temp->data<<"->";
        temp = temp->next;
        }

    }
}

int main(){
    Node *head = new Node(-1);
    Node *temp = head;
    int inp = 0;
    while(inp!=-1){
        cout<<"Enter the data(-1 to stop): ";
        cin>>inp;
        if(inp==-1) break;
        if(head->data==-1){
            head->data=inp;
        }
        else{
            Node *nn = new Node(inp);
            temp->next = nn;
            temp = temp->next;
        }
    }

    temp->next = head;
    printLL(head);


return 0;}
