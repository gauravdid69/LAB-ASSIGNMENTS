#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        while (!isalnum(str[left]) && left < right) {
            left++;
        }

        while (!isalnum(str[right]) && left < right) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return 0; 
        }
        
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
