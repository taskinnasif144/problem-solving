
#include <stdio.h>

int returnMax(int arr[], int size, int index, int max)
{
    if (index == size)
    {
        return max;
    }

    if (arr[index] > max)
    {
        returnMax(arr, size, index + 1, arr[index]);
    }
    else
    {
        returnMax(arr, size, index + 1, max);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = returnMax(a, n, 1, a[0]);

    printf("%d", max);
}