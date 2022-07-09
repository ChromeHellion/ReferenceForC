#include <iostream>
#include <cmath>
using namespace std;

//----------------------------------------------------------------BINARY SEARCH-------------------------------------------


// if array [midpoint] == target ----> it must return the value of the midpoint
// if array [midpoint] < target ------> first=midpoint +1
// else array[midpoint] > target ------> last=midpoint -1



// int binarySearch(int sizeArray,int array[],int target){
//     int first=0;
//     int last=sizeArray-1;

//     while (first<=last){
//         int midpoint=floor((first+last)/2);
//         if(array[midpoint]==target){
//             return midpoint;
//         }
//         else if(array[midpoint]<target){
//             first=midpoint+1;
//         }

//         else if(array[midpoint]>target){
//             last=midpoint-1;
//         }
//     }
//     return -1;

// }

// int main(){
//     int array[]={1,2,5,7,8,9,10,12,15,17,20,22};
//     int sizeArray=sizeof(array)/sizeof(array[0]);
    
//     int target=7;
    
//     int y=binarySearch(sizeArray,array,target);
//     (y==-1) ? cout<<"Element not found" : cout<<"Element found at "<<y;
    
//     return 0;

// }



//---------------------RECURSIVE BINARY SEARCH----------------------------------------------------------------


int recursiveBinarySearch(int array[],int target,int low,int high){
    if(low<=high){
        int midpoint=low+((high-low)/2); // to prevnt integer overflow we use l+ ((h-l)/2) to catch the midpoint 
        if(array[midpoint]== target){
            return midpoint;
        }
        else if(array[midpoint]>target){
            return recursiveBinarySearch(array,target,low,midpoint-1);
        }
        else if(array[midpoint]<target){
            return recursiveBinarySearch(array,target,midpoint+1,high);
        }
    }
    return -1;
}


int main(){
    while(true){
        int array[]={1,2,5,7,8,9,10,13,23,24,34,46,57,58};
        int low=0;
        int high=(sizeof(array)/sizeof(array[0]))-1;
        int target;
        cout<<"Enter Element"<<endl;
        cin>>target;
    
        int y=recursiveBinarySearch(array,target,low,high);
        (y==-1) ? cout<<"Element not found" : cout<<"Element found at "<<y<<endl;
    }
    return 0;
    
}