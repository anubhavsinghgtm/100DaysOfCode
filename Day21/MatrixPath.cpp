/*




*/


#include<iostream>

using namespace std;

void findPath(int i, int j, int n, int m, string s=""){

//Base case
if(i==n-1 && j==m-1){
    cout<<s<<endl;
    return;
}
if(i>n-1 || j>m-1)
    return;

//Down path
findPath(i+1,j,n,m,s+"D");

//Right path
findPath(i,j+1,n,m,s+"R");

}

int main(){
int n,m;
cin>>n>>m;
findPath(0,0,n,m);
return 0;
}
