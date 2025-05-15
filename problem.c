// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include<stdio.h>

void print1toN(int i, int num ) {
    if(i == num+1) {
        return;
    }
    printf("%d\n", i);
    print1toN(i+1, num);
}

int main() {
    int num;
    scanf("%d", &num);
    print1toN(1, num);
    

    return 0;
}