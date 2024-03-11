#include <stdio.h>
 


int sum_of_digit(int n)
{

    if (n == 0)

       return 0;
    
    else{
       
    

    return (n % 10 + sum_of_digit(n / 10));

}
}

 


int main()
{

    int n;
    printf("give number");
    scanf("%d",&n);

    int result = sum_of_digit(n);

    printf("Sum of digits in %d is %d\n", n, result);

    return 0;
}
