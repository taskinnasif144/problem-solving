#include<bits/stdc++.h>

using namespace std;

void printNTimes(int n, char c) {
    while(n--) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        char c;
        cin >> n >> c;
        printNTimes(n, c);
        
    }
    return 0;
}