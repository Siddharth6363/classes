#include<iostream>           //OUTSIDE CLASS
using namespace std;

 class info{
    public:
    string name;
    int id;

    void printname();                //declaring the fucntion

    void printid();

 };

   void info::printname(){
    cout<<"Name is "<<name<<'\n';       //this both are outside class functions
   }

   void info::printid(){
    cout<<"ID is "<<id<<'\n';           //this both are outside class functions
   }

int main()
{
    info obj1;
    obj1.name="Sid";
    obj1.id=63;

    obj1.printname();            //calling of a function

    obj1.printid();                 //calling of a function


    return 0;
}