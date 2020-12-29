#include<iostream>

using namespace std;

int main(){
int n,x,y,ans;
int xCount=0, yCount=0;
cin>>n>>x>>y;
int arr[n-1];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<n; i++){

    if(arr[i]==x)
        xCount++;
    else if(arr[i]==y)
        yCount++;

}

if(xCount==yCount)
{
    if(x<y)
        ans=x;
    else
        ans=y;
}
else if(xCount<yCount)
    ans=y;
ans = x;
cout<<ans;
return 0;
}
