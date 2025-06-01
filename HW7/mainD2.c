#include <stdio.h>

int recursioncalc(int n) {
    if (n == 0)
        return 0;
    return n + recursioncalc(n - 1);
}

int main() {
    int n, sum;
    scanf("%d", &n);
    sum = recursioncalc(n);
    printf("%d\n", sum);
    return 0;
}