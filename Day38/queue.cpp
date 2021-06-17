#include<iostream>

using namespace std;

struct Queue{

    int size, cap;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    // to insert an element
    void enque(int x){
        if(isfull()){
            cout<<"Queue is Full";
            return;
        }
        else
        {
            arr[size] = x;
            size++;
        }
    }

    // to remove the element
    void deque(){
        if(isempty())
            return;
        for(int i=0; i<size-1; i++)
            arr[i]= arr[i-1];
        size--;

    }


    // to get the front
    int getfront(){
        if(isempty()) return -1;
        else return 0;
    }

    // to get the last
    int getrear(){
        if(isempty()) return -1;
        else return size-1;

    }


    // check if queue is full
    bool isfull(){
        return (size==cap);
    }

    // int size
    bool isempty(){
        return (size==0);
    }

    // size of current queue
};

int main(){
    Queue q(10);
    q.enque(20);
    q.enque(30);
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    cout<<q.isempty()<<endl;
    return 0;;

}
