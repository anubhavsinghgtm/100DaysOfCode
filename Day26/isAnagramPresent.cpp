/*

check any anagram string is present or not
Input -
string1: brighterbees
string2: seeb

Output-
Yes


*/
#include<iostream>
#include<string>

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
        return false;
        }
}

}



int main(){
string str1;
string str2;
bool res;
cin>>str1>>str2;
int l = str2.length();
for(int i=0; i<str1.length()-l; i++){
string subs = str1.substr(i,l);
 res = checkAnagram(subs,str2);
}
(res==0)?cout<<"yes":cout<<"no";
return 0;
}


