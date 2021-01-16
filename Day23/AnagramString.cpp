/*

Check whether the string is anagram or not...
e.g.
Input:
    string 1: bees
    string 2: sebe

Output: yes

*/

#include<iostream>

using namespace std;

bool checkAnagram(string str1, string str2){
int arr[256]={0};
for(int i=0; i<str1.length(); i++){
    arr[str1[i]]++;
}
for(int i=0; i<str1.length(); i++){
    arr[str2[i]]--;
}

for(int i=0; i<256; i++){
    if(arr[i]!=0){
//        cout<<"false";
        return false;}

}
//cout<<"true";
return true;
}

int main(){
string str1, str2;
cin>>str1>>str2;
bool res = checkAnagram(str1,str2);
(res==0)?cout<<"no":cout<<"yes";
return 0;
}
