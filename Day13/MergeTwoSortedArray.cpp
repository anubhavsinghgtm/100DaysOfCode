
#include<bits/stdc++.h>

using namespace std;


void mergeArray(int *arr1, int *arr2, int n, int m){
    int c[m+n];
    for(int i=0; i<n; i++){
        c[i] = arr1[i];
    }

    for(int i=0; i<m; i++){
        c[n+i] = arr2[i];
    }
    sort(c,c+n+m);
    for(int i=0; i<m+n; i++)
        cout<<c[i];
}

int main(){
int n,m;
cin>>n>>m;
int arr1[n],arr2[m];
cout<<"Enter first array element: ";
for(int i=0; i<n; i++)
    cin>>arr1[i];
cout<<"Enter second array element: ";
for(int i=0; i<m; i++)
    cin>>arr2[i];

    mergeArray(arr1, arr2, n, m);
return 0;
}
