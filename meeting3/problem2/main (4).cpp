#include <iostream>
using namespace std;

int flargest(int a, int b, int c){
int largest = a;
        if (b > largest){
        largest = b;
    }
        if (c > largest){
        largest = c;
    }
    return largest;
}
int main(){
    int number1, number2, number3;

    cout<<"Input 1st number: ";
    cin>>number1;

    cout<<"Input 2nd number: ";
    cin>>number2;

    cout<<"Input 3rd number: ";
    cin>>number3;

    int lnumber = flargest(number1,number2, number3);

    cout <<"The largest number between "<< number1 <<", "<< number2 <<", ""and "<< number3 <<" is "<< lnumber<<"."<<endl;

    return 0;
}