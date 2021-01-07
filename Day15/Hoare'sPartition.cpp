#include<iostream>

using namespace std;

//Hoare's Partition

int partitions(int *arr, int l, int h){
//first element is the pivot element here...

int pivot = arr[l];
int i=l-1, j=h+1;
while (1>0){

        //check if left is smaller with pivot or not
    do{
        i++;
    }while(arr[i]<pivot);

        //check if right is greater with pivot or not
    do{
        j--;
    }while(arr[j]>pivot);

    if(i>j) {return j+1;}
    swap(arr[i],arr[j]);

}
    }


int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int p = partitions(arr,0,n-1);

cout<<"partition index is: "<<p<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i];
}

return 0;
}

