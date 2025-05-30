#include <stdio.h>

int f(int x) {
    if (x >= -2 && x < 2)
        return x * x;
    else if (x >= 2)
        return x * x + 4 * x + 5;
    else
        return 4;
}


int main(void) {
    int x, max = -2147483648;

    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        int fx = f(x);
        if (fx > max) max = fx;
    }
    printf("%d", max);
    return 0;
}
