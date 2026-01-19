#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s, result="";
    getline(cin, s);

    for (char ch : s)
        if (isalpha(ch))
            result += ch;

    cout << result;
    return 0;
}
