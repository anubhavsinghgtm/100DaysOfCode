#include<iostream>

using namespace std;

void reverseArray(int *arr, int x, int n){

for(int i=x; i<n/2; i++)
{
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
}

}


void reverseArrayInGroups(int *arr, int &n, int k){
    for(int i=0; i<n; i+=k){
            //cout<<i<<" ";
        reverseArray(arr,i,i+k);
    }
}

int main(){
int n,k;
cin>>n;
cin>>k;
int arr[n];
for(int i=0; i<n; i++){

    cin>>arr[i];
}

reverseArrayInGroups(arr,n,k);

for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

return 0;
}
