#include <stdio.h>

int isBalanced(int num)
{
    int odd = 0, even = 0;

    while (num)
    {
        int n = num % 10;
        if(n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        num = num / 10;
    }
    return odd == even;
}

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int hasValue = 0;

    for (int i = l; i <= r; i++)
    {
        if (isBalanced(i))
        {
            hasValue = 1;
            printf("%d \n", i);
        }
    }

    if (!hasValue)
    {
        printf("-1");
    }

    return 0;
}