#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }

    cout << s;
    return 0;
}
