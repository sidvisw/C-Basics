#include<bits/stdc++.h>
using namespace std;
int product(int a,int b){
    static int c;  //this executes only once
    c++; //next time this function is run the value of c will be retained
    return a*b+c;
}
inline int product_inline(int a,int b){
    //not recommended to use inline with static variables
    return a*b;
}
float moneyRecieved(int curr_money,float factor=1.04){
    return curr_money*factor;
}
// int strlen(const char*p){

// }
int main()
{
    int a,b;
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"if you have "<<money<<" rs in ur bank acc you will recieve "<<moneyRecieved(money)<<" rs after one yr"<<endl;
    cout<<"for vip:if you have "<<money<<" rs in ur bank acc you will recieve "<<moneyRecieved(money,1.1)<<" rs after one yr"<<endl;
    return 0;
}