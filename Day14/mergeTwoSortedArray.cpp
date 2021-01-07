
#include<iostream>

using namespace std;

void mergeArray(int a[], int b[], int &n, int &m){
int i=0,j=0;
while(i<n&&j<m){
    if(a[i]<b[j]){cout<<a[i];
        i++;
    }
    else{
        cout<<b[j];
        j++;
    }

}
while(i<n){cout<<a[i++];}
while(j<m){cout<<b[j++];}
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
