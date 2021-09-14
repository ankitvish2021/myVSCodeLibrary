#include<iostream>
using namespace std;
class introduction{
    string name;
    int roll_no;
    string address;
    int initcounter(){counter=0;}
    int counter;
    public:
    void introduceyourshelf(){
        for(int i=0;i<=2;i++){ 
        cout<<"Enter the name of student"<<endl;
        cin>>name;
        cout<<"Enter your roll no"<<endl;
        cin>>roll_no;
        cout<<"enter your address "<<endl;
        cin>>address;
       counter++; 
}
    }
    
        
    
    
   


};

int main(){
    introduction ankit;
    introduction amit;
    ankit.introduceyourshelf();
   
 
   
    
return 0;
}