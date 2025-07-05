#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--) {
        long long int N;
        cin >> N;

        int power = 0;

        while(N > 3) {
            power += 1;
            N = N /4;

        }

        long long int res = pow(2, power);
        cout << res << endl;


    }
    return 0;
}