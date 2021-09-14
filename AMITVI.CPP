//
#include <iostream>
using namespace std;
float moneyreceived(int currentmoney, float factor = 1.02)
{
    return currentmoney * factor;
}
int main()
{
    int money;
    cout << "Enter current money in rupee" << endl;
    cin >> money;

    cout << "special offer for everyone in the money becomes  " << moneyreceived(money);
    cout << "this offer is only valid for boy" << moneyreceived(money, 1.3);

    return 0;
}
