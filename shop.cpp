#include<iostream>
using namespace std;
class shop
{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(){counter=0;}
    void setPrice();
    void displayPrice();



};
void shop::setPrice()
{ 
    cout<<"Enter the itemId "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the itemPrice of product "<<endl;
    cin>>itemPrice[counter];
counter++;}
void shop::displayPrice()
{
    for(int i=0;i<counter;i++)
    cout<<"Enter the price of item with id "<<itemId[i]<<"is"<<itemPrice[i]<<endl;

}



int main(){
    shop bhai;
    bhai.initcounter();

    bhai.setPrice();
    bhai.setPrice();
    bhai.setPrice(); 
    bhai.displayPrice();
    
return 0;
}