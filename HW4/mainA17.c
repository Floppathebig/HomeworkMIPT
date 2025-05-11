#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);
    a>=3?(a<=5?printf("spring"):(a<=8?printf("summer"):(a<=11?printf("autumn"):printf("winter")))):printf("winter");
    return 0;
}
