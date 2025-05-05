#include <stdio.h>

int main(void) {
    int a, b, min, max;
    scanf("%d%d", &a, &b);
    max = a > b ? a : b;
    min = b > a ? a : b;
    printf("%d %d", min, max);
    return 0;
}
