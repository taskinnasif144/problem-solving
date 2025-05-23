#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int matt[r][c];

    int index, largest = 0, current;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matt[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        current = 0;

        for (int j = c-1; j >=0; j--)
        {
            if(matt[i][j] == 1) {
                current++;
            }
        }
        if(largest < current) {
            index = i;
            largest = current;
        }
    }

    printf("%d", index);
    return 0;
}