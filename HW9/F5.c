//#include <stdio.h>

int find_max_array(int size, int a[]) {
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}
/*
int main() {
    int arr[1000];
    int n = 0;


    while (scanf("%d", &arr[n]) == 1) {
        n++;
        if (getchar() == '\n') break;
    }


    int max = find_max_array(n, arr);
    printf("%d", max);

    return 0;
}
*/