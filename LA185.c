#include <stdio.h>
#include <ctype.h>
void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
*vowels = 0;
*consonants = 0;
while (*str) {
char c = tolower(*str);
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
(*vowels)++;
} else if (c >= 'a' && c <= 'z') {
(*consonants)++;
}
str++;
}
}
int main() {
char str[] = "Hello, World!";
int vowels, consonants;
countVowelsAndConsonants(str, &vowels, &consonants);
printf("Vowels: %d\n", vowels);
printf("Consonants: %d\n", consonants);
return 0;
}

