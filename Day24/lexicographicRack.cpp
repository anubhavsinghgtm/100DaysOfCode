/*

find lexicographic rank of any string

Input = bac
output = 3


*/

#include<iostream>
using namespace std;

// to find the factorial
int fact(int n){
if(n==2 || n==1)
    return n;
return n*fact(n-1);}


// to find the rank
int findRank(string str){
    int l = str.length();
    int arr[l-1];

    //converting all the string value into integer and storing them to an array
    for(int i=0; i<l; i++){
        arr[i] = str[i]-96;
    }

    //actual logic
    int ans=0;
    for(int i=0; i<l-1; i++){

        //finding smaller than present element
        int smaller=0;
        for(int j=i+1; j<l; j++){
        if(arr[i]>arr[j])
            smaller++;
        }
        ans+=smaller*fact(l-i-1);
    }

    return ans+1;


}

int main(){
string str;
cin>>str;
int ans = findRank(str);
cout<<ans;
return 0;
}
