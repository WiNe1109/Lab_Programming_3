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
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

  
    if (n <= 0) {
        cout << "The number of elements should be positive." << endl;
        return 0;
    }

    
    vector<int> vec(n);

    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

  
    vector<int> reversedvec = reversevector(vec);

  
    cout << "The reversed vector is: ";
    for (int i : reversedvec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
