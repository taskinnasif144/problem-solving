#include <stdio.h>

int summation(int arr[], int size, int index) {
    if(index == size) {
        return 0;
    }

    return arr[index] + summation(arr, size, index + 1);
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int sum = summation(A, N, 0);
    printf("%d", sum);

    return 0;
}