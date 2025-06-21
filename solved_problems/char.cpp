#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << (char)(c - 'a' + 'A') << endl;
    } else {
         cout << (char)(c + 'a' - 'A') << endl;
    }

    return 0;
}