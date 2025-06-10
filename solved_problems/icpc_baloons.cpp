#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int lenString;
        string solvedPronlems;
        cin >> lenString >> solvedPronlems;
        unordered_set<char> problems;
        int baloons = 0;
        for(char c: solvedPronlems){
            if( problems.count(c) ) {
                baloons++;
            } else {
                problems.insert(c);
                baloons += 2;
            }
        }

        cout << baloons << endl;
       
    }

    return 0;
}