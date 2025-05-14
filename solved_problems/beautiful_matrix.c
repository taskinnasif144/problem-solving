// https://codeforces.com/contest/263/problem/A

#include <stdio.h>
 
int main()
{
    int matrix[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(matrix[i][j] == 1) {
                int res = (abs(2-i) + abs(2-j));
                
                printf("%d", res);
            }
        }
    }
 
    return 0;
}