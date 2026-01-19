#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double FACTOR = 9.0 / 5.0;
    const int OFFSET = 32;

    cout << "Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * FACTOR) + OFFSET;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
