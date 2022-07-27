#include<iostream>
#include<stack>
#include<math.h>
using namespace std;


int evalPostfix(string expression){
    stack<int> S;
    int len=expression.length();

    for(int i=0; i<len; i++){
        if(expression[i]>='0' && expression[i]<='9'){//single digit values
            S.push(expression[i]-'0');
        }

        else{
            int a=S.top();
            S.pop();
            int b=S.top();
            S.pop();

            switch(expression[i]){
                case '+': S.push(b+a);
                        break;
                case '-': S.push(b-a);
                        break;
                case '*': S.push(b*a);
                        break;
                case '/': S.push(b/a);
                        break;
                case '^': S.push(pow(b, a));
                        break;

            }
        }
    }
    return S.top();
}

int main(){
    string expression="23*54*+9-";
    cout<<evalPostfix(expression);
    return 0;
}