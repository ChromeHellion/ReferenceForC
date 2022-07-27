#include<iostream>
#include<stack>//in built library in c++
#include<cstring>

using  namespace std;

void reverseString(string C,int n,string B){
    stack<char> S;
    for (int i=0;i<n;i++){
        S.push(C[i]);
    }

    for(int i=0;i<n;i++){
        C[i]=S.top();
        S.pop();
    }
    cout<<"Output string is: "<<C<<endl;
    for(int i=0;i<n;i++){
        if(C[i]==B[i]){
            continue;
        }
        else{
            cout<<"Not a pallindrome"<<endl;
            return;
        }
    }
    cout<<"It is a pallindrome"<<endl;
}


int main(){
    while(true){
        string C;
        cout<<"Enter a string: ";
        getline(cin,C);
        string B=C;
        reverseString(C,C.length(),B);
    }

}