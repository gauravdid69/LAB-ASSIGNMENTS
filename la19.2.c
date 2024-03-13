#include <stdio.h>
#include <ctype.h> 

void LastCharacters(char sentence[]) {
    int i = 0;
    while (sentence[i] != '\0') {
 
        if (isalnum(sentence[i])) {
          
            int end = i;
            while (isalnum(sentence[end])) {
                end++;
            }
 
            printf("%c ", sentence[end - 1]);
        
            i = end;
        } else {
       
            i++;
        }
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Last characters of each word: ");
    LastCharacters(sentence);

    return 0;
}
