#include<iostream>

using namespace std;

int majorityWins(int arr[], int n, int x,int y)
{
    // code here
    int xCount = 0;
    int yCount = 0;
    for(int i=0; i<n ; i++)
    {
        if(arr[i]==x){
            xCount++;
        }
        else if(arr[i]==y){
            yCount++;
        }
    }
    if(xCount!=yCount){
    int ans = max(xCount, yCount);
    if(ans==xCount)
    return x;
    else
    return y;
    }
    else
    return min(x,y);
}


int main(){
int n,x,y;
cin>>n;
cin>>x;
cin>>y;
int arr[n];
for(int i=0; i<n; i++){

    cin>>arr[i];
}


cout<<majorityWins(arr,n,x,y)<<" ";

return 0;
}


