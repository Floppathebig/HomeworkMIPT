#include <stdio.h>

void revprint(int n) {
    printf("%d ", n % 10);
    if (n >= 10) {
        revprint(n / 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    revprint(n);
    printf("\n");
    return 0;
}