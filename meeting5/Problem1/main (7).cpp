#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i, number;
    vector<string> fizzbuzzresults(100);
    
    for(i = 0; i < 100; i++)
    {
        number = i+1;
        if(number % 3 == 0 && number % 5 == 0)
        {
            fizzbuzzresults[i] = "FizzBuzz";
        }
        else if (number % 5 == 0)
        {
            fizzbuzzresults[i] = "Fizz";   
        }
        else if(number % 3 == 0)
        {
            fizzbuzzresults[i] = "Buzz";
        }
        else
        {
            fizzbuzzresults[i] = to_string(number);
        }
        
        }
        for(const string & result : fizzbuzzresults)
        {
            cout<<result<<endl;
        }
        
    
}