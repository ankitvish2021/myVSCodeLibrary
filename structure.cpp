// #include<iostream>
// using namespace std;
// // struct student{
// //     int id;
// //     char favcharacter;
// //     float salary;
// // };
// // int main()
// // {
// //     struct student ankit;
// // ankit.id=5;
// // ankit.favcharacter='a';
// // ankit.salary=12000000;
// // cout<<ankit.salary<<endl;
// // cout<<ankit.favcharacter<<endl;
// // cout<<ankit.id<<endl;

//*************Different way to stuct a union using of typedef*****************//
// typedef struct student 
// {
//     int id;
//     char favcharacter;
//     float earning;
// }av;
// int main()
// {
//  av amit;
//  amit.id=8;
//  amit.favcharacter='c';
//  amit.earning=1000;
//  cout<<"the earning of amit is :"<<amit.earning<<endl;
//  cout<<"the id of amit is :"<<amit.id<<endl;
//  cout<<"the favourite caharacter of amit is :"<<amit.favcharacter<<endl;
//  return 0;



// }

//     // return 0;
// // C
#include<iostream>
using namespace std;
union money
{
    int rice;
    float currency;
    char favcharacter;
    
};
int main()
{
    union money m1;
    m1.rice=85;
    m1.currency=78;
    m1.favcharacter='c';
    cout<<"the rice of m1 is equal to ="<<m1.rice<<endl;
    // cout<<"The currency of rice is equal = "<<m1.currency<<endl;
    // cout<<"the favourite character of rice is equal to = "<<m1.favcharacter<<endl;
    return 0;



}
