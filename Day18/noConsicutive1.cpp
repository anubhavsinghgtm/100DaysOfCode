/*
for n = 1, ans = 2
    0
    1

for n = 2, ans = 3
    00
    10
    01

for n = 3, ans = 5
    000
    100
    010
    001
    101

for n=4, ans = 8
    0000
    0001
    0010
    0100
    1000
    0101
    1001
    1010


following fibnocci relation...
*/

#include<iostream>

using namespace std;

int fib(int n){
//base case
if(n==1||n==0) return n;

//
return fib(n-1)+fib(n-2);
}

int main(){
int n;
cin>>n;
int ans = fib(n+2);
cout<<ans;
return 0;
}
