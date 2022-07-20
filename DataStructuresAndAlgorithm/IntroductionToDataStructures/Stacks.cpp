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


/*-----------------LINKED LIST BASED IMPLEMENTATION---------------*/

struct Node
{
    int data;
    Node *next;
};

Node* head=NULL;

void push(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;

}

void pop(){
    Node* temp=new Node();
    if(head==NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    temp=head;
    head=temp->next;
    free(temp);

}
bool isEmpty(){
    if(head==NULL){
        return true;
    }

    return false;
}

void top(){
    cout<<head->data<<endl; 
}

void print(){
    Node* temp1=new Node();
    temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
}
int main(){
    push(5);
    print();
    push(1);
    print();
    push(6);
    print();
    pop();
    print();
    pop();
    print();
    int y=isEmpty();
    (y==true) ? cout<<"List is empty"<<endl :cout<<"List is not empty"<<endl;
    top();
    push(6);
    top();
    print();
    
}
