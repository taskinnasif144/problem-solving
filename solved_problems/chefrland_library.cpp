#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    while (test--)
    {
        int N; // number of books borrowed from library
        cin >> N;
        vector<int> books(N);
        for (int i = 0; i < N; i++)
        {
            cin >> books[i];
        }
        unordered_map<int, int> freq;

        for (int i = 0; i < N; i++)
        {
            if (freq.find(books[i]) != freq.end())
            {
                freq[books[i]] = max(freq[books[i]], i + 1);
            }
            else
            {
                freq[books[i]] = i + 1;
            }
        }

        int sum = 0;
        for (const auto &pair : freq)
        {
            sum += pair.second; // sum all values
        }
    }
}
