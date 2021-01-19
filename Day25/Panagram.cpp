/*

Panagram string means a string contain all the value 'a' to 'z'

*/

#include<iostream>

using namespace std;


bool checkPanagram(string str){
int arr[26] = {0};
int l = str.length();
for(int i=0; i<l; i++){
    arr[str[i]-97]++;
}

for(int i=0; i<l; i++){
    if(arr[i]==0)
        return false;
}
return true;
}



int main(){
string str;
getline(cin, str);
bool ans = checkPanagram(str);
cout<<ans;
return 0;
}
