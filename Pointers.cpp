/* 
variables are stored in RAM(Random Access Memory) of a PC
Pointers are basically memory address


To access pointers or the memory to access it we use '&' right before the initiated variable to locate the specific memory address

To create a pointer variable we use '*' right before the variable

To dereference it you use '*' before  the variable when giving an output

Common uses of pointers is using it with arrays
*/



#include <iostream>
using namespace std;


//Referencing and DeReferencing

/*
int main(){
    int age=2;
    int *pAge= &age;

    double gpa=3.5;
    double *pGpa= &gpa;

    string name1="Tom";
    string *pName1= &name1;


    cout<<"Age: "<<&age<<endl;
    cout <<"Age: "<<pAge<<endl;
    cout<<"GPA: "<<pGpa<<endl;
    cout<<"Name: "<<pName1<<endl;

    cout<<"Age: "<<pAge<<endl;
    cout<<"Age: "<<*pAge<<endl;
    cout<<"GPA: "<<*pGpa<<endl;
    *pGpa=4;
    cout<<"GPA: "<<*pGpa<<endl;

    return 0;

}
*/


//Void Pointers(can hold all types of variables  only limitation is we can't dereference void pointers)


/*
void printNumber(int* pNumber){

    cout<<*pNumber<<endl;
}

void printChar(char* pChar){
    cout<<*pChar<<endl;
    *pChar='b';
    cout<<*pChar<<endl;
}

void print(void *ptr, char type){
    switch(type){
        case 'i':
            cout<<"Integer: "<<*((int*)ptr)<<endl;
            break;
        case 'c':
            cout<<"Character: "<<*((char*)ptr)<<endl;
            break;
    }
}

int main(){
    int number=5;
    char character='a';

    printNumber(&number);
    printChar(&character);

    print(&character,'c');
    print(&number,'i');


    return 0;
}

*/


//Arrays & Pointers

/*
int main(){
    int luckyNumbers[5];

    for (int i=0;i<5;i++){
        cout<<"Number: ";
        int x;
        cin>>x;
        luckyNumbers[i]=x;
    }

    for(int i=0;i<5;i++){
        cout<<&luckyNumbers[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<*(luckyNumbers+i)<<" ";
    }
    cout<<endl;

    cout<<luckyNumbers;
    }

    */


//return multiple values from a function using pointers

/*
void getMinAndMax(int numbers[],int size,int* min,int* max){
        for(int i=0;i<size;i++){
            
            if(*max<numbers[i]){
                *max=numbers[i];
            }
            if(numbers[i]<*min){
                *min=numbers[i];
            }        
    }
}

int main(){
    
    int numbers[7]={1,7,4,8,-56,222,888877};
    int min=numbers[0];
    int max=numbers[0];

    getMinAndMax(numbers,6,&min,&max);

    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min<<endl;



    return 0;
}

*/


//Dynamic Array Allocation

// "new" function will allocate memory for us when we need it  & "delete" is a command which will deallocate memory


/*
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int *myArray=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Array["<<i<<"]: ";
        cin>>myArray[i];
    }

    for(int i=0;i<size;i++){
        cout<<myArray[i]<<" ";
    }

    cout<<endl;

    delete[]myArray; // IF deleted it will point to a random location that we don't know about
    myArray=NULL; // if we let the compiler know that the array is empty then nothing gets printed
    for(int i=0;i<size;i++){
        cout<<myArray[i];
    }

}

*/

//Dynamic MultiArray Allocation

/*
int main(){
    int rows,cols;
    cout<<"Enter rows and colums: "<<endl;
    cin>>rows>>cols;

    int** table=new int *[rows];

    for(int i=0;i<rows;i++){
        table[i]=new int[cols];
        for(int j=0;j<cols;j++){
            cout<<"Table["<<i<<"]["<<j<<"]: ";
            cin>>table[i][j];
        }

    }


    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/