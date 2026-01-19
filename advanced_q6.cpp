#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int words = 0;
    bool inWord = false;

    for (char ch : s) {
        if (ch != ' ' && !inWord) {
            words++;
            inWord = true;
        } else if (ch == ' ')
            inWord = false;
    }

    cout << "Number of words: " << words;
    return 0;
}
