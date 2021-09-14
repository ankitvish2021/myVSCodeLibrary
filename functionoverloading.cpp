// #include<iostream>
// using namespace std;
// int sum(int a, int b)
// {
//     return a+b;
// }
// int sum(int a,int b,int c)
// {
//     return (a+b+c);

// }

// int main(){
//     int x=3,y=2,z=6;
//     cout<<"the sum of x and y is equal to "<<sum(x,y)<<endl;
//     cout<<"the sum of x,y and z is equal to "<<sum(x,y,z);
    
// return 0;
// }
//******THIS IS INTELIGENC OF C++ AND THIS IS THE EXAMPLE OF FUNCTION OVERLOADING

#include<iostream>
using namespace std;
float volume(float r,int h)
{
 cout<<"the volume of cylinder"<<endl;
    return(3.14*r*r*h);


}
int volume(int a)
{
    cout<<"the volume of cube is "<<endl;
    return(a*a*a);

}
int volume(int l,int b, int h)
{
    cout<<"the volume of cuboid is "<<endl;
    return(l*b*h);

}

int main(){
    int x =5,y=4,z=6;
    cout<<"the volumle of cuboid is "<<volume (x,y,z)<<endl;
    cout<<"the volume of cylnider is equals to "<<volume(x,y)<<endl;
    cout<<"the volume of cube is equals to "<<volume(x)<<endl;

    
return 0;
}