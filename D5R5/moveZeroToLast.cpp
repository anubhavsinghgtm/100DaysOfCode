#include<iostream>

using namespace std;

void moveZeroToLast(int *arr, int &n){
int x=0;

for(int i=0; i<n; i++){
    if(arr[i]!=0){
        int temp = arr[x];
        arr[x] = arr[i];
        arr[i] = temp;
        x++;
    }
}

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
cout<<"Before moving zero to last: ";
for(int i=0; i<n; i++)
    cout<<arr[i];

moveZeroToLast(arr,n);
cout<<"After moving zero to last: ";
for(int i=0; i<n; i++)
    cout<<arr[i];

return 0;
}
