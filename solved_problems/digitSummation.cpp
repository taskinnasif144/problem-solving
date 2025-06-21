#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int M, N;
    cin >> N >> M;
    int lastN, lastM;
    lastN = N % 10;
    lastM = M % 10;
    cout << lastM + lastN;
    return 0;
}