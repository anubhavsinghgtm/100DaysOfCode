#include<iostream>

using namespace std;

int *merges(int *arr, int p, int q, int r){
int n1, n2;
n1 = q-p+1;
n2 = r-q;
int leftArr[n1+1], rightArr[n2+1];
// value to the left array
for(int i=0; i<n1; i++)
    leftArr[i]=arr[p+i-1];

// value to right array
for(int j=0; j<n2; j++)
    rightArr[j]=arr[q+j];

leftArr[n1+1] = 1000000000;
rightArr[n2+1] = 10000000000;
int i=1,j=1,k;
for(k=p;k<r;k++){
    if(leftArr[i]<rightArr[j]){
    arr[k] = leftArr[i];
    i++;
    }
    else{
        arr[k]=rightArr[j];
        j++;
    }

}

return arr;
}


int* merge_sort(int *arr, int p, int r){
    int *a;
if(p<r){
    int q = (p+r)/2;
    merge_sort(arr, p, q);
    merge_sort(arr, q+1, r);
    a = merges(arr, p,q,r);
}

return a;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; ++i){
    cin>>arr[i];
}

int *a = merge_sort(arr,0,n);

for(int i=0; i<n; ++i){
    cout<<a[i]<<" ";
}

return 0;
}
