#include<iostream>
using namespace std;
int volume(int r,int h)
{
    return 3.14*r*r*h;
    cout<<"this return the volume of cylinder"<<endl;
}
int volume(int l,int b,int h)
{
    return l*b*h;
    cout<<"this return the volume of cuboid"<<endl;
}
int volume(int n)
{
    return n*n*n;
    cout<<"this return the volume of cube"<<endl;
}
int main(){
    int x=9,y=3,z=4;
    cout<<"the volume of cylinder is "<<volume(x,y)<<endl;
    cout<<"the volume of cuboid is "<<volume(x,y,z)<<endl;
    cout<<"the volume of cube is "<<volume(x);
    
return 0;
}