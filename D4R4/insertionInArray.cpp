#include<iostream>

using namespace std;


void insert_at_beg(int *arr, int &n, int ele)
{
    // copy all the elements to one position ahead
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    //copy the ele at the beginning
    arr[0] = ele;
}

void insert_at_pos(int *arr, int &n, int pos, int ele){

//copy element till the position we need
for(int i=n-1; i>pos; i--){
    arr[i] = arr[i-1];
}

//copy element at pos
arr[pos]=ele;
}

void insert_at_end(int *arr, int &n, int ele){

arr[n]=ele;
}

void printArray(int *arr, int &n){
    for(int i=0; i<=n; i++)
        cout<<arr[i]<<" ";
}

int main(){
int n;
cout<<"Enter size of array: "<<endl;
cin>>n;
int arr[n];
cout<<"Enter Array elements: "<<endl;
for(int i=0; i<n-2; ++i)
    cin>>arr[i];

printArray(arr, n);

// insert at beginning
insert_at_beg(arr,n,10);
cout<<"\nAfter insertion at beginning: "<<endl;
printArray(arr, n);

cout<<"\nAfter insertion at given position: "<<endl;
insert_at_pos(arr,n,2,20);
printArray(arr, n);


cout<<"\nAfter insertion at end: "<<endl;
insert_at_end(arr,n,30);
printArray(arr, n);

}
