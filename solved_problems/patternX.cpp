#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int innerSpace = N - 2;
    int outterSpace = 0;
    bool isCenter = false;
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < outterSpace; j++)
        {
            cout << " ";
        }
        if (!isCenter && innerSpace <= 0)
        {
            cout << "X";
            outterSpace--;
            innerSpace += 2;
            isCenter = true;
            cout << endl;
            continue;
        }
        if (!isCenter)
        {
            cout << "\\";
        }
        else
        {
            cout << "/";
        }
        for (int j = 0; j < innerSpace; j++)
        {
            cout << " ";
        }
        if (!isCenter)
        {

            cout << "/";
        }
        else
        {
            cout << "\\";
        }

        if (!isCenter)
        {
            outterSpace++;
            innerSpace -= 2;
        }
        else
        {
            outterSpace--;
            innerSpace += 2;
        }

        cout << endl;
    }
    return 0;
}