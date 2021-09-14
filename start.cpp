#include<iostream>
using namespace std;
int main()
{
int a=5,b=4;
cout<<"the value of logical operation ((a<b)&&(a==b)):"<<((a<b)&&(a==b))<<endl;
cout<<"the value of second logical operation ((a>b)&&(a==b)):"<<((a>b)&&(a==b))<<endl;
cout<<"the value of third logical operation((a>b)||(a<b)):"<<((a>b)||(a==b))<<endl;
cout<<"the value of logical operation((a<b)||(a==b):"<<((a<b)||(a==b))<<endl;
cout<<"the value of fourth logical operation ((a==b)||(a!=b)):"<<((a==b)||(a!=b))<<endl;
return 0;

}