#include <iostream>
using namespace std;
int main()
{
    int n, i, sum=0;
    n = 5;
    
    for (i=0; i<=n; i++)
    {
        sum += i;
    }
    cout << "The sum of all natural numbers up to an integer of " << n << " is " << sum<<endl;
    cout << "Test Successful"<<endl;
}