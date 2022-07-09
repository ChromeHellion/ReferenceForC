#include <iostream>
#include <cmath>

using namespace std;

/*

void sayHello( string name, int age){

    cout<<"Hello " <<name<< " and You must be " <<age <<" years old";
}

int main(){

    string name;
    int age;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);

    cout<<"Enter your age: "<<endl;
    cin>>age;

    sayHello(name,age);
    return 0;

}

*/






//a function that returns

/*

float cube(float x)
{
    float sum;
    sum=x*x*x;
    return sum;
}


int main()
{
    float a;
    cout<<"Enter a number to  cube: ";
    cin>>a;

    float cubed=cube(a);
    cout<<cubed;
    return 0;
}

*/

//if functions

/*
int maxValue(int num1,int num2)
{
    int result;
    if(num1>num2)
    {
        result=num1;
    }
    else
    {
        result=num2;
    }

    return result;
}
int main()
{
    while (true)
    {
        
        int a1, a2;
        cout<<"Enter num1 and num2: "<<endl;
        cin>>a1;
        cin>>a2;  
        int BigNum=maxValue(a1,a2);
        cout<<BigNum<<endl;
    }
    
}
*/

//Switch cases

/*
string getDay(int getNum)
{
    string dayName;

    switch(getNum)
    {
        case 1: 
            dayName="Sunday"; break;
        case 2: 
            dayName="Monday"; break;
        case 3: 
            dayName="Tuesday"; break;
        case 4: 
            dayName="Wednesday"; break;
        case 5: 
            dayName="Thursday"; break;
        case 6: 
            dayName="Friday"; break;
        case 7: 
            dayName="Saturday"; break;
        
        default:
            cout<<"Invalid Number";
    }

    return dayName;
}

int main()
{
    int num;
    while (true)
    {
        cout<<"Enter a number b/w 1-7"<<endl;
        cin>>num;
        cout<<getDay(num);
    }
    
    
}

*/


//while loops

/*
int main()
{
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=10);
}

*/


//Secret guessing Game 

/*
int main(){
    int secretNum=9;
    int guessNum;
    int guessCount=8;

    while(secretNum!=guessNum){
        cout<<"Enter the correct no: "<<endl;
        cin>>guessNum;
        --guessCount;
        if(guessCount==0){
            cout<<"You ran out of lives";
            break;
        }

        if(secretNum==guessNum)
        {
            cout<<"Congrats!! You guessed the right number.";
            break;
        }
    }

    
}

*/


//for loops

/*
int main(){
    int array[]={1,2,4,5,6,7,9};
    int arraySize = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<arraySize;i++){
        cout<<array[i]<<endl;
    }
}

*/