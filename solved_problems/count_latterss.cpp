#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }


    for (int i = 0; i < 26; i++)
    {
        if (freq[i])
        {

            cout << (char)(i  + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
