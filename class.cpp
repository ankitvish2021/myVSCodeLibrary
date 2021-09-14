#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData(){
        cout<<"the value of a is equal to "<<a<<endl;
        cout<<"the value of b is equal to "<<b<<endl;
        cout<<"the value of c is equal to "<<c<<endl;
        cout<<"the value of d is equal to "<<d<<endl;
        cout<<"the value of e is equal to "<<e<<endl;

    }
};
void Employee::setData(int a1,int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee ankit;
    ankit.d=5;
    ankit.e=6;
    ankit.setData(8,9,7);
    ankit.getData();
    
return 0;
}