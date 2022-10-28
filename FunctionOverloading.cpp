#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    cout<<"using func with 2 argument"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"using func with 3 arguments"<<endl;
    return a+b+c;
}
//calc the volume of a cylinder
float volume(double r,int h){
    return 3.14*r*r*h;
}
//calc the volume of a cube
float volume(int a){
    return pow(a,3);
}
//calc the volume of a cuboid
float volume(int l,int b, int h){
    return l*b*h;
}
int main()
{
    cout<<"the sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum of 3,7 and 6 is "<<add(3,7,6)<<endl;
    cout<<"the vol of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the vol of cube of 3 is "<<volume(3)<<endl;
    cout<<"the vol of cylinder of 3 and 6 is "<<volume(3,6)<<endl;
    return 0;
}