#include<iostream>


using namespace std;


int &fun(){
static int x = 10;
return x;
}

int swaps(int &x, int &z){
int temp = x;
x = z;
z = temp;
}


int main(){
int x = 10;
int &y = x;
int z = 20;

// ---- referencing same element ----
cout<<x<<" "<<y<<endl;
cout<<&x<<" "<<&y<<endl;

// ----- swap using referencing ------
cout<<"Element before swap: ";
cout<<x<<" "<<z<<endl;
swaps(x,z);
cout<<"Element after swap: ";
cout<<x<<" "<<z<<endl;

// ----- Referencing element inside a function ----

int &a = fun();// referencing function fun

cout<<"Before changing the value: "<<fun()<<endl;
a = 30; // changing the value of variable inside function fun
cout<<"After changing the value: "<<fun()<<endl;

return 0;
}
