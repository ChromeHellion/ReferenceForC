#include<iostream>
using namespace std;

/*-----------------ARRAY BASED IMPLENENTATION---------------*/

// int top=-1;

// void push(int x,int y,int array[]){
    
//     if(top==y-1){
//         cout<<"STACK OVERFLOW"<<endl;
//         return;
//     }
//     top++;
//     array[top] = x;
// }

// void pop(){
//     if(top==-1){
//         cout<<"STACK EMPTY"<<endl;
//         return;
//     }
//     top=top-1;
    
// }

// int top1(int array[]){
//     if(top==-1){
//         return -1;
//     }
//     return array[top];
// }

// bool isEmpty(int array[]){
//     if(top!=-1){
//         return false;
//     }
//     return true;
// } 


// void print(int array[]){
//     cout<<"TOP- "<<top<<endl;
//     cout<<"STACK-->";
//     for(int i=0;i<top+1;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     cout<<"Enter size of the array"<<endl;
//     int y;
//     cin>>y;
    
//     int* array=new int[y];
//     push(4,y,array);
//     print(array);
//     push(9,y,array);
//     print(array);
//     push(10,y,array);
//     print(array);
//     push(134,y,array);
//     print(array);
//     push(139,y,array);
//     print(array);
//     push(1355,y,array);
//     print(array);
//     pop();
//     print(array);
//     pop();
//     print(array);
//     pop();
//     print(array);
//     pop();
//     print(array);
//     cout<<endl;
//     (top1(array)==-1) ? cout<<"Stack is empty"<<endl: cout<<"Stack is not empty"<<endl;
//     cout<<isEmpty(array)<<endl;
// }


/*-----------------LINKED LIST BASED IMPLENENTATION---------------*/


