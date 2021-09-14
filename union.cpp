#include<iostream>
using namespace std;
union ankit
{
int rice;
float ball;
char required_char ;


};
int main()
{
    
    union ankit av;
    av.rice=78;
    av.ball=120;
    av.required_char='a';
    cout<<"the value of ball is equal to ="<<av.ball<<endl;
    cout<<"the value of rice is equal to = "<<av.rice<<endl;

    return 0;

}