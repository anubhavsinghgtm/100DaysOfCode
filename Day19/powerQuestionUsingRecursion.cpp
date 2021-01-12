/*

input: a,b
output: a raise to the power b

Note: Recursion is required


time complexity: O(log n);

*/



#include<iostream>
using namespace std;

int getPower(int a, int b){
// base case
if(b==0) return 1;
if(b==1) return a;

int temp = getPower(a,b/2);

if(b%2==0){
    return temp*temp;
}
else{
    return a*temp*temp;
}
}

int main(){
int a,b;
cin>>a>>b;
int ans = getPower(a,b);
cout<<ans;
return 0;
}
