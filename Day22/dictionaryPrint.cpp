/*

input = an integer n
output = number from 1 to n in dictionary order
n=11
0,1,10,11,2,3,4,5,6,7,8,9

*/

#include<iostream>

using namespace std;

void dictionaryPattern(int n,int i=0){
//Base case
if(i>n) return;

cout<<i<<endl;
for(int j=(i == 0)?1:0; j<=9; j++)
    dictionaryPattern(n,10*i+j);

}

int main(){
int n;
cin>>n;
dictionaryPattern(n);
return 0;
}
