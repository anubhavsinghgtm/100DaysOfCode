/*

input = 'ABC'
output = ABC,ACB,BAC,BCA,CAB,CBA



*/


#include<iostream>

using namespace std;

void printPattern(string str, string last=""){
    int n = str.length();
    if(n==0){
        cout<<last<<endl;
        return;
    }

    for(int i=0; i<n; i++){
        char ch=str[i];
        string ros = str.substr(0,i)+str.substr(i+1);
        printPattern(ros,last+ch);
    }

}

int main(){
string str;
cin>>str;
printPattern(str);
return 0;
}
