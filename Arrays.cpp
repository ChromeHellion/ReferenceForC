#include <iostream>
using namespace std;

int main(){
    int arrayGrid[3][3]={
                {1,2,3},
                {4,5,6},
                {7,8,9}
    };

    int arrayGrid2[3][3]={
                {1,2,3},
                {4,5,6},
                {7,8,9}
    };

    int totalGrid[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int total;
            total=arrayGrid[i][j]+arrayGrid2[i][j];
            totalGrid[i][j]=total;
            if(i==j){
                cout<<totalGrid[i][j];
            }
            if(i+j==(3-1))
            {
                cout<<totalGrid[i][j];
            }
            
            else{
                cout<<"   ";
            }
            
        }
        cout<<endl;
    }

}