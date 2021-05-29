/*



*/

#include<iostream>
#include<stack>

using namespace std;


// ======= to calculate the precedence of the operator =======
int precedence(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

// ========= postfix calculating function ========
void postfix(string str){
    stack<char> s;
    string ans;

    for(int i=0; i<str.length(); i++){
        char c = str[i];

        // if alphabets or numeric characters are found
        if((c >= 'a' && c<='z') || (c >='A' && c<='Z') || (c >='0' && c<='9'))
            ans+=c;

        // for opening bracket
        else if(c=='(')
            s.push('(');

        // for closing brackets
        else if(c==')'){
            while(!s.empty() && s.top() != '('){
                char temp = s.top();
                s.pop();
                ans += temp;
            }
            s.pop();
        }

        // if operator
        else{
            while(!s.empty() && precedence(c) <= precedence(s.top())){
                char temp = s.top();
                s.pop();
                ans += temp;
            }
            s.push(c);
        }
    }

    // when string is completed but stack is not empty
    while(!s.empty()){
        char temp = s.top();
        s.pop();
        ans+=temp;
    }

    // to print the result
    cout<<ans<<endl;
}


int main(){
string str;
cout<<"Enter your string: ";
cin>>str;
//str = addBrackets(str);
postfix(str);
return 0;
}
