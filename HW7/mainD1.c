#include "stdio.h"

void recursion(int i, int n) {
    if(i>n)
        return;
    printf("%d ", i);
    recursion(i+1, n);
}
int main() {
   int n,i=1;
    scanf("%d",&n);
    recursion(i,n);

    return 0;

}
