#include<iostream>


using namespace std;

void array(int *arr){

cout<<arr[0]<<endl; //0
cout<<arr[1]<<endl; //10
cout<<*arr<<endl;  //0
cout<<*arr++<<endl; //0
cout<<*arr<<endl; //10
cout<<*++arr<<endl; //20
cout<<*arr<<endl; //20
cout<<++*arr<<endl; //21
cout<<*arr<<endl; //21

}

int main(){

int arr[6] = {0,10,20,30,40,50};
array(arr);
return 0;
}
