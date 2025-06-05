#include <stdio.h>


int func_mod (int x) {
 return (x < 0) ? -x : x;
}

int main(void) {
 int a=0,b;
 scanf ("%d",&a);
 b = func_mod(a);
 printf ("%d",b);
}
