#include <stdio.h>
 
long long int getlog(long long int N){
    if(N == 1) return 0;
    return 1+getlog(N/2);
}


int main() {    
    long long int n;
    scanf("%d", &n);

    int res = getlog(n);

    printf("%d", res);

    return 0;
}
