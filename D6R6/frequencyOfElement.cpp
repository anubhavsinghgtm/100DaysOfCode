
#include<iostream>

using namespace std;

void frequencyOfElement(int *arr, int &n){
    int arr2[n] = {0};
for(int i=0; i<n; i++){
    arr2[arr[i]-1]++;
}

for(int i=0; i<n; i++){
    arr[i] =arr2[i];
}

}

int main(){
int n;
cin>>n;
int arr[n-1];
for(int i=0; i<n; i++)
    cin>>arr[i];

frequencyOfElement(arr,n);

for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

}

