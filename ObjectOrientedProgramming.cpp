#include<iostream>

using namespace std;

class AbstractEmployee{  //For example in a coffee machine if one company once to improve the effiencency of the coffee machine while retaining the common functionalities of the machine then this where the role of abstraction comes into play.
    public:
        virtual void AskForPermission()=0;
};

class Employee:public AbstractEmployee{
    private:   //data is encapsulated meaning its private and can't be accesed outside the class
        
        int Age;
        string Email;

    protected:// protected is used for variables to be accessed by inherited classes
        string Name; 

    public:

        void setName(string name){//setters
            Name=name;
        }

        string getName(){ //getters
            return Name;
        }

        void setAge(int age){//setters
            if(age>=20)
                {
                    Age=age;
                }
        }

        int getAge(){ //getters
                return Age;
        }

        void setEmail(string email){//setters
            Email=email;
        }

        string getEmail(){ //getters
            return Email;
        }


        void printDetails(){
            cout<<"Name: "<<Name<<endl;
            cout<<"Age: "<<Age<<endl;
            cout<<"Email: "<<Email<<endl;
        }

        Employee(string name,int age, string email){
            Name=name;
            Age=age;
            Email=email;
        }

        void AskForPermission(){
            if(Age>30)
            {
                cout<<Name<<" got promoted!!"<<endl;
            }
            else
            {
                cout<<Name<<" Didn't get promoted!!"<<endl;
            }
        }

        virtual void work(){// when a virtual func is invoked it checks wheter other classes with the same function name exists or not. If not then it uses the parent class function. Otherwise it uses the base.
            cout<<Name<<" Checking email,task backlog, performing tasks...."<<endl;
        }

};


class Developer:public Employee{

    public:
        string FavProgrammingLanguage;
        Developer(string name,int age,string email,string favProgrammingLanguage):Employee(name,age,email){//when inheriting functions or variables from other classes we mention the call the constructors od the other class as well
            FavProgrammingLanguage=favProgrammingLanguage;
        }

        void bugFix(){
            cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
        }
        
        void work(){
            cout<<Name<<" is writing "<<FavProgrammingLanguage<<endl;
        }

};

class Teacher:public Employee{

    public:
        string subject;
        Teacher(string name,int age,string email,string Subject):Employee(name,age,email){//when inheriting functions or variables from other classes we mention the call the constructors od the other class as well
            subject=Subject;
        }

        void prepareLesson(){
            cout<<Name<<" is preparing "<<subject<<" lesson "<<endl;
        }

        void work(){
            cout<<Name<<" is teaching"<<subject<<endl;
        }

};


int main(){
    // The most common use of polymorphism is when a parent
    //class reference is used to refer a child class object
    Employee employee1= Employee("George",38,"georgekuncheria904@gmail.com");
    employee1.printDetails();

    cout<<endl;

    Employee employee2= Employee("Jay",23,"Jay904@gmail.com");
    employee2.printDetails();

    cout<<endl;
    cout<<"------------------------------------------------------------";
    cout<<endl;
    cout<<endl;
    employee1.setAge(18);
    cout<< employee1.getName()<<" is now "<<employee1.getAge()<<" years old"<<endl;

    AbstractEmployee* e3=new Employee("Raj",20,"rajmenon@gmail.com"); // When using abstraction or creating pointer to access functions with pointers we use '->'
    e3->AskForPermission();


    cout<<"------------------------------------------------------------";
    cout<<endl;
    cout<<endl;
    Developer dev1= Developer("George",34,"georgekuncheria904@gmail.com","C++");
    dev1.bugFix();
    AbstractEmployee* e4= &dev1;
    e4->AskForPermission();
    cout<<endl;
    cout<<"------------------------------------------------------------";
    cout<<endl;

    cout<<"Polymorphism"<<endl;
    cout<<endl;
    Developer dev2=Developer("Ram",55,"ramnair@gmail.com","Ruby");
    Teacher t= Teacher("George",54,"georgekuncheria904@gmail.com"," Operating systems");
    Employee* e5= &t;
    Employee* e6= &dev2;
    AbstractEmployee* e7= &dev2;
    e5->work();
    e6->work();
    e7->AskForPermission();

    
    return 0;
}