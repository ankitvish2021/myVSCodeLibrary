#include<iostream>
using namespace std;
int main()
{
    int a=4,b=3;
    cout<<"additon of two number is a+b:"<<a+b<<endl;
    cout<<"subtraction of two number is a-b:"<<a-b<<endl;
    cout<<"multiplication of two number is a*b:"<<a*b<<endl;
    cout<<"modulas of two number is a%b:"<<a%b<<endl; 
    //comparision of numbers
    cout<<"a is greater than b a>b:"<<(a>b)<<endl;
    cout<<"a is less than b a<b "<<(a<b)<<endl;
    cout<<"a is equal to b where a==b"<<(a==b)<<endl;
 
    //logical operator 
    //&& operator
    cout<<"the value of this logical operator is ((a==b)&&(a<b)):"<<((a==b)&&(a<b))<<endl;
    cout<<"the value of this logical operator is((a>b)||(a==b)):"<<((a>b)||(a==b))<<endl;
    cout<<"the value of this logical operator is (!(a==b)) :is"<<(!(a==b))<<endl;
    cout<<"the value of this logical operatot is((a==b)&&(a>b)):"<<((a==b)&&(a>b))<<endl;
    return 0;
}
