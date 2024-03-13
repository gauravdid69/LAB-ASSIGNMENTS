#include <stdio.h>
#include <string.h>

void extractSubstring(char source[], char substring[], int start, int length) {
    int i, j;


    for (i = start, j = 0; i < start + length && source[i] != '\0'; i++, j++) {
        substring[j] = source[i];
    }


    substring[j] = '\0';
}

int main() {
    char source[100], substring[100];
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    printf("Enter the starting position of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);


    if (start < 0 || start >= strlen(source)) {
        printf("Invalid starting position.\n");
        return 1;
    }

    if (length <= 0) {
        printf("Invalid length.\n");
        return 1;
    }

    extractSubstring(source, substring, start, length);

    printf("Substring extracted from position %d with length %d: %s\n", start, length, substring);

    return 0;
}
