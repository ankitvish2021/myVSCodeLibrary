// #include<iostream>
// using namespace std;
// int factorial(int n)
// {
//     if(n<=1){
// return 1;
//     }
//  return n*factorial(n-1);

// }

// int main(){ 
//     int a;

//     cout<<"Enter the number that you want to the factorial"<<endl;
//     cin>>a;
//     cout<<"the factorial of"<<a<<"is"<<factorial(a);

    
// return 0;
// }
//*********************THIS CODE IS WRITTEN FOR FIBONACCI SERIES WHICH IS THE BEST EXAMPLE OF RECURSION********//
#include<iostream>
using namespace std;
int fib(int n)
{ 
    if(n<=1)
    return 1;{ 
    
return fib(n-2)+fib(n-1);}
}

int main(){int x;
cout<<"enter the number that number you want to fibonacci value"<<endl;
cin>>x;
cout<<"the fibonacci value of a number is "<<fib(x);
    
return 0;
}  