#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        int m = 0;
        int s = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(v1[i] > v2[i+1]) {
                m+= v1[i];
                s+= v2[i+1];
            }
        }
        m+= v1[n-1];

        cout << m - s << endl;
        
    }
    return 0;
}