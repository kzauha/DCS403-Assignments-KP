#include <iostream>

using namespace std;

int main(){
    int n, count, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for(count = 1; count <= n; count++){
        sum += count;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}