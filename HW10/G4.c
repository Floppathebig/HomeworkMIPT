#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    
    char word1[101], word2[101];
    fscanf(fin, "%s %s", word1, word2);
    fclose(fin);

    int count1[26] = {0};
    int count2[26] = {0};


    for (int i = 0; word1[i]; i++) {
        count1[word1[i] - 'a']++;
    }


    for (int i = 0; word2[i]; i++) {
        count2[word2[i] - 'a']++;
    }


    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            fprintf(fout, "%c ", 'a' + i);
        }
    }

    fclose(fout);
    return 0;
}