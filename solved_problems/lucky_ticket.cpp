#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ticket;
        cin >> ticket;
        int mid = 3;
        int firstPart = stoi(ticket.substr(0, mid));
        int lastPart = stoi(ticket.substr(mid));
        int firstSum = 0;
        int lastSum = 0;
        while(firstPart) {
            int digit = firstPart % 10;
            firstSum += digit;
            firstPart =  firstPart / 10;
        }
        while(lastPart) {
            int digit = lastPart % 10;
            lastSum += digit;
            lastPart =  lastPart / 10;
        }

        if(firstSum == lastSum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}