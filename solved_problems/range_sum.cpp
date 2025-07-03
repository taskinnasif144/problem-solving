#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int arr[2];
        cin >> arr[0] >> arr[1];
        long long int l = min(arr[0], arr[1]);
        long long int r = max(arr[0], arr[1]);
        long long int sum = ((r-l + 1) * (l + r)) / 2;
        cout << sum << endl;
    }

    return 0;
}

// 203948143007666310