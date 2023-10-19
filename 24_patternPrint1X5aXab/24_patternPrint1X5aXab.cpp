#include<iostream>
using namespace std;

int main()
{
    

    for (int rows = 1; rows <=5; rows++)
    {
        char alpha ='a';
        for (int cols=1;cols<=rows; cols++)
        {
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;
        
    }
    
    return 0;
}