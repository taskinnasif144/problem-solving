#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    int freq[1001] = {0};
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        freq[v[i]] = 1;
    }

    // for(int i = 0; i < 1001; i++) {
    //    cout << freq[i] << " ";
    // }
    

    for (int i = 0; i < size; i++)
    {
        if (freq[v[i] + 1] == 1)
        {
            count++;
        }

    }


    cout << count; 

    return 0;
}
