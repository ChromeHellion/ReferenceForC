#include <iostream>
using namespace std;

int linearSearch(int array[],int x,int index,int n){
        if(n==index){
            return -1;
        }
        if(array[index]!=x){
            return linearSearch(array,x,index+1,n);
        }
        else if(array[index]==x){
            return index;
        }
    return -1;
}


int main(){
    int array[]={1,4,6,8,7,9,22,66,-1-14,67,-1};
    int x=22;
    int n=sizeof(array)/sizeof(array[0]);
    int index=0;
    int y=linearSearch(array,x,index,n);

    (y == -1) ? cout << "Element not found" : cout << "Element found at index: " << y;
}
