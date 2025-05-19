#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matt[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matt[i][j]);
        }
    }

  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(i == n -1){
            printf("%d ", matt[i][j]);
           }
        }
    }

    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(j == m -1){
            printf("%d ", matt[i][j]);
           }
        }
    }

   
}
