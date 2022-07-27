#include<iostream>
#include<cmath>

using namespace std;

int rear=-1;
int front=-1;

bool isEmpty(){
    if(rear==-1 && front==-1){
        return true;
    }
    return false;
}

int top(int array[]){
    if(front==-1 && rear==-1){
        return -1;
    }
    return array[front];
}

void enqueue(int val,int array[],int x){
    if(rear==(x-1)){
        cout<<"Queue is full"<<endl;
        return;
    }
    
    else if(isEmpty()){
        rear=0;
        front=0;
        array[rear]=val;
    }
    else{
        rear+=1;
        array[rear]=val;
    }    
}
void dequeue(){
    if(front==-1 && rear==-1){
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        front+=1;
    }

}
void printArray(int array[]){
    for(int i=front;i<rear+1;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int x;
    cout<<"Enter size of array"<<endl;
    cin>>x;
    int* array = new int[x];

    enqueue(4,array,x);
    printArray(array);
    enqueue(9,array,x);
    printArray(array);
    enqueue(12,array,x);
    printArray(array);
    enqueue(18,array,x);
    printArray(array);
    dequeue();
    printArray(array);
    (isEmpty()==true) ? cout<<"Queue is empty" << endl : cout<<"Queue is not empty"<<endl;
    (top(array)==-1) ? cout<<"Queue is empty" << endl : cout<<top(array)<<endl;
    dequeue();
    dequeue();
    dequeue();
    cout<<isEmpty();

}