/*


============================================
=     Reverse Linked List Recursively      =
============================================


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


void printLL(Node *head){
    if(head->data==-1){
        cout<<"NULL";
    }
    else{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
}



Node *reverseLLR(Node *head){
    if(head->next==NULL) return head; //base case

    Node *last = reverseLLR(head->next); // recursive call
    Node *first = head->next; // rest first
    first->next = head;
    head->next = NULL;
    return last;
}

int main(){
    Node *head = new Node(-1);
    Node *temp = head;
    int choice = 0;
    while(choice!=-1){
        cout<<"Enter the data(-1 for to close): ";
        cin>>choice;
        if(choice==-1){
            break;
        }
        if(head->data==-1){
            head->data = choice;
        }
        else{
            Node *nn = new Node(choice);
            temp->next = nn;
            temp = temp->next;
        }
    }

    printLL(head);
    head = reverseLLR(head);
    printLL(head);

return 0;
}
