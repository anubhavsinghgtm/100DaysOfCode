/*

Input: 10101011
Output:  6



*/

#include<iostream>

using namespace std;

bool isEqual(string str){
int zero=0,one=1;
int n=str.length();
for(int i=0; i<n; i++){
    if(str[i]=='0')
        zero++;
    else
        one++;
}
    return (zero==one)?true:false;
}

int longestSubstring(string str){
int maxLength=0;
int n=str.length();

for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        if(isEqual(str.substr(i,j-i+1))&&maxLength<j-i+1)
            maxLength = j-i+1;
    }
}

return maxLength+1;
}

int main(){
string str;
cin>>str;
int ans = longestSubstring(str);
cout<<ans;
return 0;
}
