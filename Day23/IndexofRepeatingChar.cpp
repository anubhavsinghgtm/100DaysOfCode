/*

Index of left most repeating character


Input: brighterbees
output: 0(index of 'b')


*/

#include<iostream>

using namespace std;

int findIndex(string str){
int arr[256]={0};
int res=-1;
for(int i=str.length()-1;i>=0;i--){
    if(arr[str[i]]==0)
        arr[str[i]]++;
    else
        res=i;

}
return res;

}

int main(){
string str;
cin>>str;
int index = findIndex(str);
cout<<index;
return 0;
}
