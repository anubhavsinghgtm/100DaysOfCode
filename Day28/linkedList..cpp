/*

======== In this code we are going to create Simply LinkedList using "struct" data type ===========

1. Self- Referential:  those structures that point to the same type of structure.

==> Next pointer holds the value of the next node which is of
    same type and that's why we are using self-referential structure here.



*/


#include<iostream>

using namespace std;

struct Node
{
  int data; // to keep the data of the LinkedList
  Node *next; // Self referential pointer

  Node(int x)
  {  // constructor
    data = x;
    next = NULL;
  }

};

// ======  print function for LinkedList  ==============
void printLL(Node *ptr){
  while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }
}


// =======  Recursive print function  ========
void printLLR(Node *ptr){
  if(ptr==NULL){
    return;
  }
  cout<<ptr->data<<endl;
  printLLR(ptr->next);
}

int main(){

  //==== LinkedList of three nodes ====
  Node *head = new Node(10);
  Node *temp1 = new Node(20);
  Node *temp2 = new Node(30);
  head->next = temp1;
  temp1->next = temp2;

  printLL(head); // Iterative print
  printLLR(head); // Recursive print


return 0;}
