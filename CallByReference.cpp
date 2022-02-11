#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}
// this will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//call by reference using pointers
void swapPointer(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by reference using pointers
// int & 
void swapReferenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    // return a;
}
int main()
{
    int a=4,b=5;
    // cout<<"the sum of 4 and 5 is "<<sum(a,b);
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b);
    // cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapPointer(&a,&b);
    // cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapReferenceVar(a,b)=766;
    swapReferenceVar(a,b);
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}