#include<iostream>
#include<stack>//in built library in c++
#include<cstring>

using  namespace std;

void reverseString(char *C,int n){
    stack<char> S;
    for (int i=0;i<n;i++){
        S.push(C[i]);
    }

    for(int i=0;i<n;i++){
        C[i]=S.top();
        S.pop();
    }
}


int main(){
    char C[100];
    cout<<"Enter a string: ";
    gets(C);
    reverseString(C,strlen(C));
    cout<<"Output string is: "<<C;
}