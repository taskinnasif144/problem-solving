#include <stdio.h>

int main()
{
    int tests;
    scanf("%d", &tests);
    double arr[4];

    for (int i = 0; i < tests; i++)
    {
        // to fill out the array
        for (int i = 0; i < 4; i++)
        {
            scanf("%lf", &arr[i]);
        }

        double mulOf3 = arr[1] * arr[2] * arr[3];
        double multiRes = arr[0];
        if (arr[1] == 0 || arr[2] == 0 || arr[3] == 0) {
            if (multiRes == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
            continue;
        }

        double res = multiRes / mulOf3;

        if (res == floor(res))
        {
            printf("%d", (int)res);
        }
        else
        {
            printf("-1");
        }

        printf("\n");
    }
}
