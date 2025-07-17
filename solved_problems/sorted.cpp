#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        bool isSorted = true;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                isSorted = false;
            }
        }
        if(isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}