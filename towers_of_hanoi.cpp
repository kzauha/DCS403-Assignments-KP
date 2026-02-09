#include <iostream>
using namespace std;

void towersOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    towersOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towersOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 3; // Number of disks
    cout << "The sequence of moves involved in the Tower of Hanoi are:" << endl;
    towersOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}