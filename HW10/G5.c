#include <stdio.h>


int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");


    char str[1001];
    fgets(str, sizeof(str), fin);
    fclose(fin);


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') str[i] = 'b';
        else if (str[i] == 'b') str[i] = 'a';
        else if (str[i] == 'A') str[i] = 'B';
        else if (str[i] == 'B') str[i] = 'A';
    }


    fputs(str, fout);
    fclose(fout);

    return 0;
}
