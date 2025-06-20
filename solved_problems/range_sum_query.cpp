#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> v(N);
    vector<vector<int>> pairs(Q, vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < Q; i++)
    {
        cin >> pairs[i][0] >> pairs[i][1];
    }



    for (int i = 0; i < Q; i++)
    {
        int start = pairs[i][0];
        int end = pairs[i][1];
        int sum = 0;
        for(int i = start-1; i < end;i++) {
            sum += v[i];
        }

        cout  <<sum << endl;
        
    }

    return 0;
}
