#include<iostream>


using namespace std;


int main(){
// how to declare the pointer
int x=10;
int y=20;
int *ptr = &x;
int *ptr2 = &y;

// pointer to pointer declaration
int **ptr3 = &ptr2;
cout<<*ptr<<" ";
cout<<ptr<<endl;

// pointer to pointer
cout<<**ptr3<<endl;

// size of a pointer
char *c;
double *p;
cout<<sizeof(x)<<" ";
cout<<sizeof(p)<<" ";
cout<<sizeof(c)<<" ";
// all have same size



return 0;
}
