#include<iostream>

using namespace std;

int equilibriumPoint(int a[], int n) {

    // Your code here
    int sum=0;
    int leftSum=0;
    for(int i=0; i<n; i++)
    sum+=a[i];
    for(int i=0; i<n; i++){
    if(leftSum*2!=(sum-a[i]))
    leftSum+=a[i];
    else
    return i+1;
    }
    return -1;

}

int main(){
int n,x,y;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){

    cin>>arr[i];
}


cout<<equilibriumPoint(arr,n)<<" ";

return 0;
}

