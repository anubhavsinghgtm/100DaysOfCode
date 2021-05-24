#include<iostream>
#include<stack>

using namespace std;

int main(){

stack<int> s; // to create a stack

s.push(10); // to push an element
s.push(20);

cout<<s.size()<<endl; // to know the size of stack

cout<<s.top()<<endl; // Top element

s.pop(); // to remove the top element

cout<<s.top()<<endl;
return 0;
}
