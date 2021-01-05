#include<iostream>

using namespace std;

void bubbleSort(int *arr, int n){

for(int i=0; i<n-1; i++)
{

    for(int j=0; j<n-i; j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j+1],arr[j]);
        }
    }
}
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n; i++)
{
    cin>>arr[i];
}

//to sort the array
bubbleSort(arr,n);


// to print the sorted array
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
