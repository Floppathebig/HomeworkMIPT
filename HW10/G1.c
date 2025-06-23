#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    char str[101];
    fgets(str, sizeof(str), fin);


    str[strcspn(str, "\r\n")] = '\0';

    int len = strlen(str);

    fprintf(fout, "%s, %s, %s %d\n", str, str, str, len);

    fclose(fin);
    fclose(fout);

    return 0;
}