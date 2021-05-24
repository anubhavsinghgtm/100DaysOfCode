#include<iostream>
#include<vector>

using namespace std;




class Stack{
    private:
    int maxSize;
    int top;
    vector<int> v;

    public:
    Stack(int size){
        this->maxSize = size;
        this->top=-1;
        this->v.reserve(this->maxSize);
    }

    void push(int inp){
        if(!(this->isFull())){
            this->v[++this->top] = inp;
        }
        else{
            cout<<"Stack is Full!!!"<<endl;
        }
    }

    int pop(){
        if(!(this->isEmpty())){
            return this->v[this->top--];
        }
        else{
            cout<<"Stack is Full!!!"<<endl;
        }
    }

    int peak(){
    return this->v[this->top];
    }

    bool isFull(){
        return (this->maxSize-1 == this->top);
    }
    bool isEmpty(){
        return (this->top == -1);
    }

};

int main(){
    Stack s(2);

    s.push(10);
    s.push(20);

    cout<<s.peak()<<endl;
    s.push(30);
    cout<<s.pop()<<endl;
    cout<<s.peak()<<endl;
return 0;
}
