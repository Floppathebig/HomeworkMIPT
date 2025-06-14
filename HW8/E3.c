#include <stdio.h>

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

    }
    int max = arr[0], min = arr[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("%d %d %d %d", maxIndex + 1, max, minIndex + 1, min);

    return 0;
}