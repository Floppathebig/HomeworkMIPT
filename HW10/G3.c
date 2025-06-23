#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");


    char str[1001];
    fgets(str, sizeof(str), fin);
    fclose(fin);

    
    str[strcspn(str, "\r\n")] = '\0';

    int len = strlen(str);
    if (len == 0) {
        fclose(fout);
        return 0;
    }

    char last = str[len - 1];

    for (int i = 0; i < len - 1; i++) {
        if (str[i] == last) {
            fprintf(fout, "%d ", i);
        }
    }

    fclose(fout);
    return 0;
}