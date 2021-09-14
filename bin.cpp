#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void chk_bin();
    void onescomp();
    void display();
};
void binary::read()
{
    cout << "enter a any number " << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect format of number" << endl;
            exit(0);
        }
    }
}
void binary ::onescomp()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }

}
void binary::display()
{
    cout << "your binary is ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
} 
int main()
{
    binary ankit;
    ankit.read();
    ankit.chk_bin();
    ankit.onescomp();
    ankit.display();

 
    return 0;
}