#include<iostream>
using namespace std;
void swapPointer(int *a,int *b)

{
    int temp=*a;
    *a=*b;
    temp=*b;


}

int main(){
    int x=3,y=4;
    cout<<"the value of x is equal ="<<x<<endl;
    cout<<"the value of y is equal to "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value of  x is equal to ="<<x<<endl;
    cout<<"the value of y is equal to ="<<y<<endl;

return 0;
}