#include<iostream>

using namespace std;

//Lomuto Partition

int partitions(int *arr, int l, int h){
//last element is the pivot element here
int pivot = arr[h];
int i=l-1;
for(int j=l; j<h; j++){
    if(arr[j]<=pivot){
        i++;
    swap(arr[i],arr[j]);
    }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
    }


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int p = partitions(arr,0,n-1);

cout<<"partition index is: "<<p<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i];
}

return 0;
}
