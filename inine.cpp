// #include<iostream>
// using namespace std;
//  int product(int a, int b)
//  /*INLINE FUNCTION IS USED WHEN IN THE GIVEN FUNCTION IS NOT A STATIC FUNCTION ,INLINE FUNCTION IS REDUCED THE FUNCTION CALL THIS WILL 
//  NOT BE REQUESTED WHEN STATIC VARIBLE IS DEFINED*/
// {
//     static int c=0;
//     c=c+1;
//     return a*b+c;

// }

// int main()
// { int x,y;

// cout<<"Enter th value of x "<<x<<endl;
// cin>>x;
// cout<<"Enter the value of y is equal "<<y<<endl;
// cin>>y;
// cout<<"The product of x and y is equal to "<<product(x,y)<<endl;
// cout<<"The product of x and y is equal to "<<product(x,y)<<endl;
// cout<<"The product of x and y is equal to "<<product(x,y)<<endl;
// cout<<"The product of x and y is equal to "<<product(x,y)<<endl;
// return 0;
// }

#include<iostream>
using namespace std;
float moneyreceived(int currentmoney, float factor=1.1)//THIS IS THE EXAMPLE OF DEFAULT ARGUMENT 
//DEFAULT ARGUMENT MEANS THE INPUT WHICH IS NOT GIVEN BY THE USERS AND COMPUTER AUTOMATICALLY USED DEFAULT
{
    return currentmoney*factor;
}

int main(){
    int money;

    cout<<"enter the current money "<<endl;
    cin>>money;
    cout<<"After two month money become is "<<moneyreceived(money);
    cout<<"special offer for vishwakarma family is "<<moneyreceived(money,1.1);
return 0;
}