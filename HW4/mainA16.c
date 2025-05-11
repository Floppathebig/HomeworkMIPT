#include <stdio.h>


int main() {
    int a, b, c, r;
    r = 0;
    scanf("%d %d %d", &a, &b, &c);
    a < b ? r++ : r--;
    b < c ? r++ : r--;
    r == 2 ? printf("YES") : printf("NO");

    return 0;
}
