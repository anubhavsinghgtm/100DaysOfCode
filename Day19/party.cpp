/*


Some friends are wishing to go to a party and there are two cases of them to go to the party:
1. Go separate
2. Go along with friends

Input: n(the number of friends)
Output: total number of possible

Ex:
n = 2
ans = 2
A and B
1. A,B - A and B are going separately
2. AB - A and B are going together

*/


#include<iostream>

using namespace std;

int goParty(int n){
// Base case
if(n==1 || n==2) return n;

return goParty(n-1)+(n-1)*goParty(n-2);
}

int main(){
int n;
cin>>n;
int ans = goParty(n);
cout<<ans;
return 0;
}
