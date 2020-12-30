#include<iostream>
#include<string>
using namespace std;

bool pallindrome(string s, int x, int y){
if(x==y) return true;
if(x>y) return true;
if(s[x]!=s[y]) return false;
pallindrome(s, x+1, y-1);
}

int main(){
    string s;
    cin>>s;
    bool ans = pallindrome(s,0,s.length());
    cout<<ans;
 return 0;
 }
