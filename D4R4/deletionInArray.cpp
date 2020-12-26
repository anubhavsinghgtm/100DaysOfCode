#include<iostream>

using namespace std;

void printArray(int *arr, int &n){
    for(int i=0; i<=n; i++)
        cout<<arr[i]<<" ";

}

void delete_at_beg(int *arr, int &n){
    for(int i=0; i<n; i++)
        arr[i]=arr[i+1];
    arr[n] = NULL;
}

void delete_at_pos(int *arr, int &n, int pos){
    for(int i=pos;i<n;i++)
        arr[i]=arr[i+1];
    arr[n] = NULL;
}

void delete_at_end(int *arr, int &n){
    arr[n] = NULL;
}

int main(){
int n;
cout<<"Enter the size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the element of array: "<<endl;
for(int i=0; i<=n; i++){
    cin>>arr[i];
}
printArray(arr,n);

cout<<"\nArray after delete at end: "<<endl;
delete_at_end(arr,n);
printArray(arr,n);

cout<<"\nArray after delete at beginning: "<<endl;
delete_at_beg(arr,n);
printArray(arr,n);

cout<<"\nArray after delete at given position: "<<endl;
delete_at_pos(arr,n,2);
printArray(arr,n);


return 0;
}
