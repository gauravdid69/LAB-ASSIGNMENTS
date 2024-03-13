#include <stdio.h>
#include <string.h>

void findFirstLargestWord(char sentence[]) {
    char largestWord[100] = "";
    char currentWord[100] = ""; 
    int maxLength = 0; 

    int i = 0;
    while (sentence[i] != '\0') {

        while (sentence[i] == ' ') {
            i++;
        }


        int j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            currentWord[j++] = sentence[i++];
        }
        currentWord[j] = '\0';


        if (strlen(currentWord) > maxLength) {
            maxLength = strlen(currentWord);
            strcpy(largestWord, currentWord); 
        }


        currentWord[0] = '\0';
    }

    printf("First largest word in the given sentence: %s\n", largestWord);
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);


    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    findFirstLargestWord(sentence);

    return 0;
}
