#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void displayPrice();
    void setPrice();
};
void Shop::setPrice()
{
    cout << "enter id of ur item no. " << counter + 1 << "=";
    cin >> itemID[counter];
    cout << "enter price of ur item=";
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price id item with id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
}