#include<iostream>
using namespace std;
class Employee{
    public:
string name;
string company;
int age;
void introduceyourshelf()
{
    cout<<"Name-"<<name<<endl;
    cout<<"Company"<<company<<endl;
    cout<<"Age"<<age<<endl;

}



};


int main(){
    Employee ankit;
    ankit.name="vishwakarma";
    ankit.company="amazaon";
    ankit.age=19; 
    void introduceyourshelf(); 
    

}