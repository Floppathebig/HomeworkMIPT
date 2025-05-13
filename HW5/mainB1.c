#include <stdio.h>



int main(void) {
    int a,b;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
        b++;
		printf("%d %d %d\n",b,b*b,b*b*b);
        
    }
    return 0;
}
