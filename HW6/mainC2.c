#include <stdio.h>

int power(int n,int p) {
    int res = 1;
    for (int i=0;i < p;i++) {
        res *= n;
    }
   return res;
}
int main(void) {
    int n, p, x;
    scanf("%d %d",&n,&p);
    x = power(n,p);
    printf("%d",x);
    return 0;
}
