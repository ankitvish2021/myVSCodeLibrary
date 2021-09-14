#include<iostream>
using namespace std;
class shop{
    private:
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:  
    void setPrice();
    void displayPrice();
    void initcounter(){counter=0;}
    


};
void shop::setPrice()
{
cout<<"enter the item id"<<endl;
cin>>itemId[counter];
cout<<"enter the item price"<<endl;
cin>>itemPrice[counter];
counter++;
}

void shop::displayPrice()
{
    for(int i=0;i<counter;i++){  
    cout<<"Enter the name of the product with id "<<itemId[i]<<"is"<<itemPrice[i]<<endl;
    }
}
int main(){
    
    shop kirana;
    kirana.initcounter();
    kirana.setPrice();
    kirana.setPrice();
    kirana.setPrice();
   kirana.displayPrice();

return 0;
} 