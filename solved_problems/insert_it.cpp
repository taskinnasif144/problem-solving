#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v1(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v1[i];
    }
    int M;
    cin >> M;
    vector<int> v2(M);
    for (int i = 0; i < M; i++)
    {
        cin >> v2[i];
    }
    int index;
    cin >> index;
    v1.insert(v1.begin() + index, v2.begin(), v2.end());

    for(int i = 0; i < M+N; i++) {
        cout << v1[i] << " ";
    }
    return 0;
}