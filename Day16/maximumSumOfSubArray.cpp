#include<iostream>

using namespace std;

int maxSum(int *arr, int n, int k){
    //get sum of first k terms
    int sum=0, maxSum=0;
    for(int i=0; i<k; i++)
        sum+=arr[i];
    maxSum = sum;
    //check for the rest of element
    for(int i=k; i<n; i++){
        sum = sum+arr[i]-arr[i-k];
        if(sum>maxSum)
            maxSum=sum;
    }
    return maxSum;
}

int main(){
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int ans = maxSum(arr,n,k);
cout<<ans;

return 0;
}
