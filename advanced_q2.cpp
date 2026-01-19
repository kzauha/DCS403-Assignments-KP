#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1=2, y1=3, x2=5, y2=7;
    double dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    cout << "Distance between points = " << dist;
    return 0;
}
