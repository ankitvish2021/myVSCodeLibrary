#include<iostream>
using namespace std;
class shop{
    int itemid;
    int itemprice;
    int count;
    public:
    void setprice()
    {
        cout<<"enter the item id"<<endl;
        cin>>itemid;
        cout<<"enter the item price "<<endl;
        cin>>itemprice;
    count++;
    }
    void displayprice()
    {
        cout<<"the item id with "<<itemid<<"item price is"<<itemprice<<endl;

    }
};

int main(){
    shop dukaan;
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    dukaan.displayprice();
    dukaan.displayprice();
    


    
return 0;
}