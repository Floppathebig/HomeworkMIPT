#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int N;
    fscanf(fin, "%d", &N);

    char even_digits[] = {'2', '4', '6', '8'};
    int digit_index = 0;

    for (int i = 0; i < N / 2; i++) {
        char letter = 'A' + i;
        char digit = even_digits[digit_index];
        digit_index = (digit_index + 1) % 4;

        fputc(letter, fout);
        fputc(digit, fout);
    }

    fputc('\n', fout);
    fclose(fin);
    fclose(fout);
    return 0;
}