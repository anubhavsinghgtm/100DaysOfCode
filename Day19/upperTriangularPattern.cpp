/*

Upper triangular matrix pattern using recursion

n=4

* * * *
* * *
* *
*


*/


#include<iostream>

using namespace std;


void printPattern(int n, int i){

if(n==0) return;

if(i<n){
cout<<"* ";
printPattern(n,i+1);
}

else{
    cout<<endl;
    printPattern(n-1,0);
}

}

int main(){
int n;
cin>>n;

printPattern(n,0);

return 0;
}
