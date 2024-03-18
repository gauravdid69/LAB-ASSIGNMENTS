#include <stdio.h>
void multiply(int *a, int *b, int *result) {
*result = (*a) * (*b);
}
int main() {
int num1, num2, result;
int *ptr1, *ptr2, *ptr_result;
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
ptr1 = &num1;
ptr2 = &num2;
ptr_result = &result;
multiply(ptr1, ptr2, ptr_result);
printf("Result: %d\n", result);
return 0;
}

