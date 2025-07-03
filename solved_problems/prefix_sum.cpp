#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int prefixArr[n];
    prefixArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixArr[i] = prefixArr[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        if(l - 1 == 0) {
            sum = prefixArr[r-1];
        }
        else {
            sum = prefixArr[r-1] - prefixArr[l-2];
        }
        cout << sum << endl;
    }
    return 0;
}