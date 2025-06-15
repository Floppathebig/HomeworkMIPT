//#include <stdio.h>

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

/*

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

    }


    sort_array(10, arr);

    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}

*/