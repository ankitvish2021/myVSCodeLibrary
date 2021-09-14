// 
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    return 1;
    {
        return fib(n-2)+fib(n-1);
    }
}

int main(){
    int x;
    cout<<"Enter the value that you want to the value of fibonacci series"<<endl;
    cin>>x;
    cout<<"the value of fibonacci series is "<<fib(x);

    
return 0;
} 