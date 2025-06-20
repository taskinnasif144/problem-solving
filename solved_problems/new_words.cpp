#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int wordCounts[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            wordCounts[s[i] - 'a']++;
        }
        else if (s[i] <= 'Z' && s[i] >= 'A')
        {
            wordCounts[s[i] - 'A']++;
        }
    }

    // for(int i = 0; i < 26; i++) {
    //     cout << wordCounts[i] << " ";
    // }

    int egyptIndices[5] = {'e'-'a', 'g'-'a', 'y'-'a', 'p'-'a', 't'-'a'};

    int minimumCount = wordCounts[egyptIndices[0]];

    for (int i = 0; i < 5; i++)
    {
      minimumCount = min(minimumCount, wordCounts[egyptIndices[i]]);
    }

    cout << minimumCount;

    return 0;
}