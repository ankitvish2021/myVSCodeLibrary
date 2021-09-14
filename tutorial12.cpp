#include<iostream>
using namespace std;
int main()
{
    int a=45;
    int* b=&a;
    // cout<<"the value of a is equal to "<<a<<endl;
    // cout<<"the value of a is equal to "<<*b<<endl;
    // cout<<"the address of a is equal to "<<&a<<endl;
    // cout<<"the address of a is equal to " <<b<<endl;
    int** c=&b;
    cout<<"the address of b is equals to  "<<c<<endl;
    cout<<"the address of b is equals to  "<<&b<<endl;
    cout<<"the value of b is equal to "<<*c<<endl;
    cout<<"the value of b is equal to "<<**c<<endl;

     return 0;
}