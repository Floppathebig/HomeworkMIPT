#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    a==b? printf("Equal"):(a>b?printf("Above"):printf("Less"));
    return 0;
}
