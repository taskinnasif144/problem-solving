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

        int oddCount = 0;
        int evenCount = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        if(size % 2 == 0) {
            int steps = abs(evenCount - oddCount) / 2 ;
            cout << steps << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}