//call by reference with the help of pointer in C++
#include<iostream>
using namespace std;
// void swapPointer(int*a ,int*b)
// {
//     int temp=*a;
//      *a=*b;
//      *b=temo;

// }
// int main()
// {
//     int x=3,y=5;
//     cout<<"the value of x is= "<<x<<"\nthe value of y is equal to="<<y<<endl;
//     swapPointer(&x,&y);
//     cout<<"the value of x is equal to = "<<x<<"\n the value of y is equal to = "<<y<<endl;
//     return 0;


// }
void swapReferenceVar(int &a,int &b)
{
int temp=a;
a=b;
temp=b;
}
int main(){
    int x=9,y=6;
    cout<<"the value of x is equal to = "<<x<<"\nthe value of y is equal to = "<<y<<endl;
    swap(x,y);
    cout<<"the value of x is equal to ="<<x<<"\nthe value of y is equal to = "<<y<<endl;
    return 0;
}