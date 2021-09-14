#include<iostream>
using namespace std;
int sum(int a,int b);
void a();
int main(){
    int d,e;
    cout<<"first number"<<endl;
    cin>>d;
    cout<<"second number"<<endl;
    cin>>e;
    cout<<"the sum of two number is equal to= "<<sum(d,e);
    a(); 
    
     return 0;
}
 int sum(int a,int b)
 {
    int c=a+b; 
     return c;
 }
 void a()
 {
     cout<<"\n Ankit vishwakarma from azamgarh";
 }