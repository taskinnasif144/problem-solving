#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr, arr + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}