#include<iostream>

using namespace std;

void upPattern(int n){

if(n==0) {
return;
}
//running down till base case
upPattern(n-1);

//this will print from 1 to n
cout<<n<<" ";
}

void downPattern(int n){

if(n==1) return;

//this will print from n to 1
cout<<n<<" ";

downPattern(n-1);

}

int main(){
int n;
cin>>n;
downPattern(n);
upPattern(n);
return 0;
}
