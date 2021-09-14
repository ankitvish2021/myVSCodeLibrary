#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your age";
cin>>age;
// if((age<18)&&(age>0))
// {
//     cout<<"you can't join the party because you can't cross the age of 18";
// }
// else if(age==18)
// {
//     cout<<"you are a adult but first you passed a paper then join party";
// }
// else if(age<1)
//   {  
//        cout<<"your age is less than 1 year so that you have not yet born";
//  } 
// else{
//     cout<<"you can join the party because your age is greater than 18";
// }

switch (age)
{
case 17:
cout<<"the age of person is 17"<<endl;
break;
case 16:
cout<<"the age of person is 16"<<endl;
break;
case 12:
cout<<"the age of person is 12"<<endl;
break;
default:
cout<<"the enter age did't match with any case"<<endl;
}
cout<<"we came outside the switches"; 
    return 0;
}