#include<iostream>
using namespace std;
int main()
{
     enum Meal{ breakfast, lunch, dinner};
    //  cout<<breakfast<<endl;
    //  cout<<lunch<<endl;
    //  cout<<dinner<<endl;
 Meal m0=breakfast;
 Meal m1=lunch;
 Meal m2=dinner;


cout<<(m0==breakfast)<<endl;
cout<<(m1==lunch)<<endl;
cout<<(m2==dinner)<<endl;
cout<<(m1==dinner)<<endl;
//*************New way to draw enum function**************
cout<<m0;
cout<<m1;
cout<<m2;
    return 0;

 



   
    
} 

