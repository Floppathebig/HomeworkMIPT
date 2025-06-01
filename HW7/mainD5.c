#include <stdio.h>

void binary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    if (num > 1) {
        binary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int n;
    scanf("%d", &n);
    binary(n);
    return 0;
}