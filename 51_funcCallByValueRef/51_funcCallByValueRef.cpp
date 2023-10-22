#include<iostream>
using namespace std;


void value(int y) // Call By Value
{
    y = 50;
}
void refrence(int &z) // Call By Refrence
{
    z = 50;
}
int main()
{
    int a =10;
    value(a); // Call By Value.
    cout<<"Call By Value "<<a<<endl;
    refrence(a); // Call By Refrence.
    cout<<"Call By refrence "<<a<<endl;

    return 0;
    
}