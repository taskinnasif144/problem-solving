// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>

int main()
{
    int N, M, target;
    scanf("%d", &N);
    scanf("%d", &M);

    int matt[N][M];

    int flag = 1;

    // matrix input
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matt[i][j]);
        }
    }

    scanf("%d", &target);

    // oepration to find the summation of the diagonals
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           
            if (matt[i][j] == target)
            {
                
                flag = 0;
            }
        }
    
    }

    if (flag == 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}