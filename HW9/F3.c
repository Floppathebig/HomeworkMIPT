#include <stdio.h>



void count_digits(const char *num_str) {
    int count[10] = {0};


    for (int i = 0; num_str[i] != '\0'; i++) {
        if (num_str[i] >= '0' && num_str[i] <= '9') {
            count[num_str[i] - '0']++;
        }
    }


    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
}

int main() {
    char number[1001];


    scanf("%1000s", number);


    count_digits(number);

    return 0;
}