// oops-classes and objects
// c++-->initially called-->c with classes
// class->extension of structures(in c)
// structures had limitations
// ->members are public
// ->no methods
// classes->structures+more
// classes->can have methods and properties
// classes->can make few members as private and few as public
// structur->in c++ are typedefed
// you can declare objects along with the class declaration
// class Employee{
//     //class definition
// }harry,rohan;
// harry.salary=8 makes no sense if salary is private

// nesting of member functions
#include <bits/stdc++.h>
using namespace std;
class Binary
{
    // private:
    string s;
    void chk_bin();

public:
    void read();
    void ones_compliment();
    void display();
};

void Binary::read()
{
    cout << "enter a binary no.=";
    cin >> s;
}
void Binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
void Binary::ones_compliment()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void Binary::display()
{
    cout << s;
}

main()
{
    Binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();
}