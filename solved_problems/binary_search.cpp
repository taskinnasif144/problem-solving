#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);


    while (q--)
    {
        int target;
        cin >> target;
        int l = 0, r = n - 1;
        bool isFound = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == target)
            {
                isFound = true;
                break;
            }
            if (arr[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (isFound)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}