#include<iostream>

using namespace std;

void selectionSort(int *arr, int n){

for(int i=0; i<n-1; i++){

    int min_ind = i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[min_ind]){
            min_ind = j;
        }
    }
    swap(arr[i],arr[min_ind]);
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
selectionSort(arr,n);


// to print the sorted array
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}

