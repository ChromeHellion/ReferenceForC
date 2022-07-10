#include <iostream>
using namespace std;


int searchElement(int array[],int n,int target){
    for(int i=0;i<n;i++){
        if(array[i]==target){
            return i;
        }
    }
    return -1;
}


int insert(int array[],int n,int insertElement,int capacity){
    if(n>=capacity){
        return n;
    }

    array[n]=insertElement;

    return (n+1);
}

int deleteElement(int array[],int n,int target){

    int pos=searchElement(array,n,target);
    if(pos==-1){
        cout<<"Element not found"<<endl;
        return n;
    }

    for(int i=pos;i<n-1;i++){
        array[i]=array[i+1];
    }
    return (n-1);
}


int main(){
    int array[20]={22,44,665,55,45,34};
    int capacity=sizeof(array)/sizeof(array[0]);
    int n=6;
    
    cout<<"Size of array "<<capacity<<endl;
    int target;
    
    while(true){
        cout<<"1.) Search"<<endl;
        cout<<"2.) Insert"<<endl;
        cout<<"3.) Delete"<<endl;
        cout<<"4.) Exit"<<endl;
        int x;
        cout<<" Enter choice: "<<endl;
        cin>>x;
        if(x==1){
            cout<<"Enter the element to be searched for: "<<endl;
            cin>>target;
            (searchElement(array,n,target)==-1) ? cout<<"Element is not present in the list "<<endl : cout<<"Element is present at: "<<searchElement(array,n,target)<<endl;
        }
        
        else if(x==2){
            cout<<"What is the element to be inserted to the list"<<endl;
            int insertElement;
            cin>>insertElement;
            n=insert(array,n,insertElement,capacity);
            cout<<n<<endl;
            cout<<"{";
            for(int i=0;i<n;i++){
                if(i==n-1){
                    cout<<array[i];
                }
                else{
                    cout<<array[i]<<",";
                }
                
            }
            cout<<"}"<<endl;
        }

        else if(x==3){
            int target;
            cout<<"Enter the element to be deleted"<<endl;
            cin>>target;
            n=deleteElement(array,n,target);
            cout<<"{";
            for(int i=0;i<n;i++){
                if(i==n-1){
                    cout<<array[i];
                }
                else{
                    cout<<array[i]<<",";
                }
                
            }
            cout<<"}"<<endl;
        }

        else{
            break;
        }
    }
    


    return 0;
}