#include<iostream>

using namespace std;


// to create the node 
struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class LinkedList{
private:
    Node *head;

public:
    
    // constructor
    LinkedList(){
        head = NULL;
    }
    
    //insert at beg
    void insert_at_beg(int x){
        Node *nn = new Node(x);
            nn->next = head;
            head = nn;
    }
    
    // insert at end
    void insert_at_end(int x){
        Node *nn = new Node(x);
        if(head==NULL){
            head = nn;
        }
        else{
            Node *temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }

            temp->next = nn;
        }
    }
    
    // insert at pos
    void insert_at_pos(int x, int pos){
        Node *nn = new Node(x);
        if(head==NULL){
            head = nn;
        }

        else{
            Node *temp = head;
            int cnt=1;
            while(cnt<pos-1){
                temp=temp->next;
                ++cnt;
            }
            nn->next = temp->next;
            temp->next=nn;
        }
    }

    void printLL(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
    //delete at beg
    void delete_at_beg(){

        // if LL is already empty
        if(head==NULL)
            cout<<"Linked List is already empty"<<endl;

        // if there is only one element
        else if(head->next==NULL)
            head = NULL;

        // if element is more than one
        else{
            Node *temp = head;
            head = head->next;
            delete temp; // to free the space
        }
    }
    
    // delete at end
    void delete_at_end(){

        // if LL is already empty
        if(head==NULL)
            cout<<"Linked List is already empty"<<endl;

        // if there is only one element
        else if(head->next==NULL)
            head = NULL;

        // if element is more than one
        else{
            Node *temp = head;
            Node *ptr;
            while(temp->next->next!=NULL)
                temp = temp->next;
            ptr = temp->next;
            temp->next=NULL;
            delete ptr;
        }


    }

    // delete at pos
    void delete_at_pos(int pos){
        // if LL is already empty
        if(head==NULL)
            cout<<"Linked List is already empty"<<endl;


        // if there is only one element
        else if(head->next==NULL)
            head = NULL;

        //if elements are more than one
        else{
            int cnt = 1;
            Node *temp = head;
            Node *ptr;
            while(cnt<pos-1)
                temp=temp->next;
            ptr = temp->next;
            temp->next = ptr->next;
            delete ptr;
        }
    }

};


int main(){
    LinkedList ll;
    ll.insert_at_beg(12);
    ll.insert_at_beg(11);
    ll.insert_at_beg(10);
    ll.insert_at_end(15);
    ll.insert_at_pos(13,4);
    ll.insert_at_pos(14,5);
    ll.printLL();
    ll.delete_at_beg();
    ll.printLL();
    ll.delete_at_end();
    ll.printLL();
    ll.delete_at_pos(2);
    ll.printLL();


}
