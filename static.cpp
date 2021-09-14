#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:

    void setData()
    {
        cout<<"enter the id of employee"<<endl;
        cin>>id;
        count++;
    }
    void getData()
    {
        cout<<"enter the employee id"<<id<<"with number"<<count<<endl;

    }
    void intcount()
    {
        cout<<"the value of employee is "<<count<<endl;
    }
};
int Employee ::count;

int main(){
    Employee ankit;
    ankit.setData();
    ankit.getData();
    ankit.intcount();
    
return 0;
}