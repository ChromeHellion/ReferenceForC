#include<iostream>
#include<stack>
#include<cstring>
#include<math.h>
using namespace std;

int prec(char C){
    if(C=='^'){
        return 3;
    }
    if(C=='*' || C=='/'){
        return 2;
    }
    if(C=='+' || C=='-'){
        return 1;
    }
    return -1;
}


void InfixToPostfix(string exp)
{
    stack<char> S;
    string result="";
    for(int i = 0; i < exp.length();i++){
        if(
        (exp[i]>='A' && exp[i]<='Z') || 
        (exp[i]>='a' && exp[i]<='z') || 
        (exp[i]>='0' && exp[i]<'9')
        )
        
        {
            result+=exp[i];
        }

        else{
            if(S.empty()){
                S.push(exp[i]);
            }

            else{
                while(!S.empty() && prec(exp[i])<=prec(S.top())){
                    result+=S.top();
                    S.pop();
                }
            S.push(exp[i]);
            }
        }
    }
    while(!S.empty()){
        result+=S.top();
        S.pop();
    }
    cout<<result<<endl;
}


int main(){
    string exp="A+B*C-D*E";
    InfixToPostfix(exp);
    return 0;
}
