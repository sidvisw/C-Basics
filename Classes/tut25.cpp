#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setID()
    {
        salary = 122;
        cout << "enter id of employee=";
        cin >> id;
    }
    void getID()
    {
        cout << "the id of this employee is " << id << endl;
    }
};
main()
{
    // Employee harry, rohan, lavish, shruti;
    // harry.setID();
    // harry.getID();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }
}