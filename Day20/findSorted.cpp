
/*

input = [1,2,3]
output = yes


input = [2,3,4,1]
output= no


*/

#include<iostream>

using namespace std;

void findSorted(int *arr, int n, int i=0){

//Base case
    if(i==n-1){
        cout<<"yes"<<endl;
        return;
    }


if(arr[i]>arr[i+1]){
    cout<<"no"<<endl;
    return;
}

findSorted(arr,n,i+1);

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
findSorted(arr,n);

return 0;
}
