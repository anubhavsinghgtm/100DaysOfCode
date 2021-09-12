#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int main(){
    Node *binaryT = new Node(1);
    binaryT->left = new Node(2);
    cout<<binaryT->data<<" "<<binaryT->left->data;

}
