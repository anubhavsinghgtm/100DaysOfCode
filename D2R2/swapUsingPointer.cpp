#include<iostream>


using namespace std;

void swap(int *p1, int *p2){
int temp = *p1;
*p1 = *p2;
*p2 = temp;
}




int main(){

int x=20, y=30;
cout<<"Before swapping: ";
cout<<x<<" "<<y<<endl;
swap(&x, &y);
cout<<"After swapping: ";
cout<<x<<" "<<y<<endl;
return 0;
}
