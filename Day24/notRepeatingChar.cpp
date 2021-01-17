/*

Input = 'brighterbees'
Output = 2


*/

#include<iostream>

using namespace std;

int getIndex(string str){
int arr[255] = {0};
for(int i=0; i<str.length(); i++){
    arr[str[i]]++;
}
for(int i=0; i<str.length(); i++){
    if(arr[str[i]]==1)
        return i;
}

return -1;
}

int main(){
string str;
cin>>str;
int ind = getIndex(str);
cout<<ind;
return 0;
}
