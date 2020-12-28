#include<iostream>

using namespace std;

int main(){
int n,d;
cin>>n;
cout<<"array: ";
int a[n-1];
for(int i=0; i<n; i++)
    cin>>a[i];

cout<<"d: ";
cin>>d;

if(d>(n-d) )
{ int i,j,x;
    for(i=0;i<d;i++){
        x = a[d-i-1];
        for(j=0; j<(n-d); j++){
            a[d+j-i-1] = a[d+j-i];
        }
        a[n-i-1]=x;
    }
}
else{
    int i,j,x;
    for(i=0;i<(n-d);i++){
        x = a[d+i];
        for(j=0; j<d; j++){
            a[d+i-j] = a[d+i-j-1];
        }
        a[i]=x;
    }
}

for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

return 0;
}
