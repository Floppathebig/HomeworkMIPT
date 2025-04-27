#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int d = a + b + c;
    printf("%d+%d+%d=%d\n", a, b, c, d);
    d = a * b * c;
    printf("%d*%d*%d=%d", a, b, c, d);

    return 0;
}
