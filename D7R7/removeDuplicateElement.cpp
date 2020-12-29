#include<iostream>

using namespace std;

int remove_duplicate(int *arr, int &n){
    int j=1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            arr[j]=arr[i];
            j++;
        }
    }

return j;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){

    cin>>arr[i];
}

n = remove_duplicate(arr,n);

for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

return 0;
}
