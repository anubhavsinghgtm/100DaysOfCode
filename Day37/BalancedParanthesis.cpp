/*
====================================
=  Check for balanced paranthesis  =
====================================


input: (,),{,},[,] only possible inputs
*/


#include<iostream>
#include<stack>


using namespace std;

//  ======== Matching function =========
bool matching(char a, char b){
    return((a==')' && b=='(') || (a=='}' && b=='{') || (a==']' && b=='['));
}


// ========= check balanced function ======
bool isBalanced(string str, int n){
   stack<int> s;
   for(int i=0; i<n; i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            s.push(str[i]);
        else{
            if(s.empty()) return false; // if the stack is empty
            else if(matching(str[i],s.top())==false) // if input is not matching
                return false;
            else
                s.pop(); // if input matched
        }
   }
    return(s.empty()==true);
}

int main(){
int n;
cout<<"Enter the length of your string: ";
cin>>n;

cout<<"Your string: "<<endl;
string str;
cin>>str;

bool ans = isBalanced(str,n);
string res = (ans==0)?"False":"True"; // ternary operator
cout<<res;

return 0;
}
