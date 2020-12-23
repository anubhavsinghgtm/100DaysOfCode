#include<iostream>

using namespace std;


int main(){
// ----- array initialization -----
// ---- Step 1 ----
int arr1[] = {1,2,3,4};
cout<<"First Array ";
for(int i=0; i<4; ++i)
cout<<arr1[i]<<" ";
cout<<endl;

// ---- Step 2 ----
int arr2[6];
cout<<"Second Array ";
for(int i=0; i<6; ++i)
cout<<arr2[i]<<" ";
cout<<endl;

// ---- Step 3 ----
int arr3[6] = {1,2,3};
cout<<"Third Array ";
for(int i=0; i<6; ++i)
cout<<arr3[i]<<" ";
cout<<endl;

// ---- Initialize whole with 0 -----
int arr4[6] = {0};
cout<<"Fourth Array ";
for(int i=0; i<6; ++i)
cout<<arr4[i]<<" ";
cout<<endl;

// get size of any array using sizeof() operator
int sizeofarr1 = sizeof(arr1)/sizeof(arr1[0]);
cout<<"Size of first array ";
cout<<sizeofarr1<<endl;
return 0;
}
