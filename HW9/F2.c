//#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int temp[n];
    int index = 0;


    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[index++] = a[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp[index++] = a[i];
        }
    }


    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}

/*

int main() {
    int a[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
    }

    sort_even_odd(20, a);

    for (int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
*/