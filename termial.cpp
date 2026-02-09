#include <iostream>
using namespace std;

int factorial(int n) {
    if (n = 1) {
        return 1;
    }
    return n + factorial(n - 1);
}

int main() {
    cout << "Enter a positive integer: ";

    int number;
    cin >> number;
    
    cout << "Factorial: " << factorial(number) << endl;

    return 0;
}