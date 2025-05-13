// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int matt[N][N];
    int diag1 = 0, diag2 = 0;

    // matrix input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matt[i][j]);
        }
    }

    // oepration to find the summation of the diagonals
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            if (i == j)
            {
                diag1 += matt[i][j];
            }
            if ((i + j) == (N - 1))
            {
                diag2 += matt[i][j];
            }
        }
    }

    printf("%d", abs(diag1 - diag2));

    return 0;
}