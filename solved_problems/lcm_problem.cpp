#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        int l, r;
        cin >> l >> r;
        if(2 * l <= r) {
            cout << l << " " << 2*l << endl;
        } else {
            cout << "-1 -1" << endl;
        }
    }
    return 0;
}