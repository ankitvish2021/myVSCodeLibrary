#include<iostream>
using namespace std;
void g();
int sum(int,int);//This give the assurity to function this function will be written in the function  
int main()
{
    int d,e;

 cout<<"first number"<<endl;
 cin>>d;
 cout<<"second number"<<endl;
 cin>>e;
 cout<<"the sum of two number is= "<<sum(d,e)<<endl;
 g();
 return 0;

}int sum(int a,int b)
    {
        int c=a+b;
        return c;

}
void g()
{
    cout<<"Hello everyone to kaise hai aap log";
}
// First time that I am writing a function programme  in c++
/* if want to write or a make a new function in c++
so first declare a function  like  function_type function(argument);  then if you want to write something in function then like this function(){
    cout<<"I am ankit vishwakarma";
    then call the function like this functio();
    your function is successfully called
    
} */
