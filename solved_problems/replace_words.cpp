#include<bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        string x, s;
        cin >> x >> s;
        int pos = x.find(s, 0);

        while(pos != -1) {
            x.replace(pos, s.length(), "#");
            pos = x.find(s, pos);
        }

        cout << x << endl;

    }

    return 0;
}