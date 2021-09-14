#include<iostream>
using namespace std;
int main()
{
    int number,i;
    cout<<"enter the number that you want to the table is= "<<endl;
    cin>>number;
    for(i=1;i<=10;i++)
    {
        cout<<"the table of given number is= "<<number<<'*'<<i<<'='<<(number*i)<<endl;
    }
    return 0;
}