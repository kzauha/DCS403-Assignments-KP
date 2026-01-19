#include <iostream>
using namespace std;

int main() {
    string s, res="";
    cin >> s;

    for (char ch : s)
        if (string("aeiouAEIOU").find(ch) == string::npos)
            res += ch;

    cout << res;
    return 0;
}
