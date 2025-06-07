#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int smallest = arr[0] + arr[1] + 1 - 0;

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                smallest = min(smallest, val);
            }
        }
        cout << smallest << endl;
    }
    return 0;
}