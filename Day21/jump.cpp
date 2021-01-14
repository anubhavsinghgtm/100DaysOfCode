/*

input = n(an integer)
output = all possible way to jump and reach
we have 1 to 6 to complete that n by jumping...

e.g. : n=3
we have choice:
- 1 1 1
- 1 2
- 2 1
- 3
total= 4 possible ways
*/

#include<iostream>

using namespace std;

void printJump(int n,int i=0,string s=""){

//Base case
if(i==n-1){
    cout<<s<<endl;
    return;
}

if(n<=i)
    return;


for(int j=1; j<=6; j++){
    printJump(n,i+j,s+to_string(j));
}
}

int main(){
int n;
cin>>n;
printJump(n);
return 0;
}
