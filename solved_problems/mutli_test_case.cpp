#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int oddCount = 0;
        for (int i = 0; i < N; i++) {
            long long int val;
            cin >> val;
            if (val % 2 != 0) {
                oddCount++;
            }
        }

        cout << oddCount << endl;
    }
    return 0;
}