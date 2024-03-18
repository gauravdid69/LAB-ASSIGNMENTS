#include <stdio.h>
void printReverse(char *str) {
char *end = str;
while (*end != '\0') {
end++;
}
end--;
while (end >= str) {
printf("%c", *end);
end--;
}
printf("\n");
}
int main() {
char str[] = "Hello, World!";
printf("Original string: %s\n", str);
printf("Reversed string: ");
printReverse(str);
return 0;
}

