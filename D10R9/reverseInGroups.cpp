#include<iostream>

using namespace std;

void reverseArrayInGroups(int *arr, int &n, int k){
    for(int i=0; i<n; i+=k){
            int left = i;
            int right = min(i+k-1, n-1);
            while(left<right){
                swap(arr[left++],arr[right--]);
            }
}}

int main(){
int n,k;
cin>>n;
cin>>k;
int arr[n];
for(int i=0; i<n; i++){

    cin>>arr[i];
}

reverseArrayInGroups(arr,n,k);

for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

return 0;
}

