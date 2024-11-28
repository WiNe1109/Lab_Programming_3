#include <iostream>
using namespace std;
int main()
{
    int num, multiplication;
    num = 6;
    
    if (num <= 0)
    {
        cout << "Negative values are invalid";
    }else{
        cout << "Multiplication table for "<<num<<" are: "<<endl;
        cout<<"-----------------------------------"<<endl;
        for(int i = 0; i<=10; ++i)
        {
            cout<< num << " x "<<i<<" = "<<num * i <<endl;
            
        }
        cout<<"Test is succesful!";
    }
}