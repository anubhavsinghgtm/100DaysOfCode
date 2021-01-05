#include<iostream>

using namespace std;

// returns index of second largest element
int second_largest(int *arr, int &n){
int largest=0, secondLargest=-1;
for(int i=0; i<n; i++){
    if(arr[largest]<arr[i]){
        secondLargest = largest;
        largest = i;
    }
    else if(arr[largest]>arr[i]){
        if(secondLargest==-1)
            secondLargest = i;
        if(arr[secondLargest]<arr[i])
            secondLargest=i;
    }
}
return secondLargest;
}

int main(){
int n,secondLargest;
cout<<"Enter size of array: ";
cin>>n;
int arr[n-1];
cout<<"Enter array element: ";
for(int i=0; i<n; ++i)
    cin>>arr[i];
secondLargest=second_largest(arr,n);
cout<<secondLargest;
return 0;
}
