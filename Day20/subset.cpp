/*

string = 'abc'
subset = '','a','b','c','ab','bc','ac','abc'

*/

#include<iostream>

using namespace std;

void printSubset(string str, int n=0, string s=""){

    int l = str.length();

//Base case
if(n==l){
    cout<<s<<endl;
    return;
}

printSubset(str, n+1, s+str[n]);
printSubset(str, n+1, s);
}

int main(){
string str;

cin>>str;

printSubset(str);
return 0;
}
