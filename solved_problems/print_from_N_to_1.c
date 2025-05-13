// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C


#include<stdio.h>

void print1toN(int i) {
    if(i ==0 ) {
        return;
    }
    printf("%d ", i);
    print1toN(i-1);
}

int main() {
    int num;
    scanf("%d", &num);
    print1toN(num);
    

    return 0;
}