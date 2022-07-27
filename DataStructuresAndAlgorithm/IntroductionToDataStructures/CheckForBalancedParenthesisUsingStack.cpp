#include<iostream>
#include<map>
#include<stack>
#include<cstring>
#include<ctype.h>
using namespace std;

bool isCheckBalance(char *S){
    stack<char> temp;
    

    for(int i=0;i<strlen(S);i++){
        if(temp.empty()){
            temp.push(S[i]);
        }
        else if( (temp.top()=='{' && S[i]=='}') || (temp.top()=='(' && S[i]==')') || (temp.top()=='[' && S[i]==']')){
            temp.pop();
        }
    
        else{
            temp.push(S[i]);
        }
    }
    if(temp.empty()){
        return true;
    }
    return false;
}

int main(){
    char expr[100];
    
    while (true){
        
        cout<<"Enter to check if parenthesis is balanced or not: ";
        gets(expr);
        cout<<endl;
        bool x=isCheckBalance(expr);
        (x==true) ? cout<<"Expression is balanced"<<endl : cout<<"Expression is not balanced"<<endl;
    }
    return 0;
}

