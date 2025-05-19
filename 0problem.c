#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int size;
        scanf("%d", &size);
        int a[size], b[size], c[size];

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[j]);
        }

        for (int j = 0; j < size; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (b[j] > b[k])
                {
                    int tmp = b[k];
                    b[k] = b[j];
                    b[j] = tmp;
                }
            }
        }

        for (int j = 0; j < size; j++)
        {
            c[j] = abs(a[j] - b[j]);
        }

        for (int j = 0; j < size; j++)
        {
            printf("%d ", c[j]);
        }

        printf("\n");
    }
}
