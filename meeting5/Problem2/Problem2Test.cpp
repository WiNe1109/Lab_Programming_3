#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


vector<int> reversevector(const vector<int>& input) {
    vector<int> reversed(input);
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {

    vector<int> vec = {7, 0, 9, 5, 5, 3, 1};

 
    vector<int> reversedvec = reversevector(vec);

   
    cout << "Original vector: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

   
    cout << "Reversed vector: ";
    for (int i : reversedvec) {
        cout << i << " ";
    }
    cout << endl;
    cout<<"Test Successful!"<<endl;
}
   
