
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }



    for (int i = 0; i < n -1; i++) {
          int r = i+1;
        if(arr[i] == 0){
            while( arr[r] == 0 && r < n-1) {
                r++;
            }
            int temp;
            temp = arr[r];
            arr[r] = arr[i];
            arr[i] = temp;
        }  
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}