#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (words[i].length() > m)
            {
                break;
            }
            x += 1;
            m -= words[i].length();
        }

        cout << x << endl;
    }
    return 0;
}