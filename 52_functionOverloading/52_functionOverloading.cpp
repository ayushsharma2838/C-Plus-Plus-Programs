#include<iostream>
using namespace std;

int add(int num1, int num2, int num3)
{
    return num1+num2+num3;
}
int add(int num1, int num2)
{
    return num1+num2;
}
int main()
{
    int num1,num2,num3;
    cout<<add(1,2)<<endl;
    cout<<add(1,2,3);

    return 0;
}