#include <iostream>

using namespace std;

// Breaking after printing 6

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        if (i == 6) break;
    }

    cout << endl;

// Breaking before printing 6

    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;
        cout << i << " ";
    }

    return 0;
}