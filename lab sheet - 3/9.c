#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    for (; n > 0; n = n / 10) {
        digit = n % 10;
        sum = sum + digit * digit * digit;
    }
    if (sum == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

    return 0;
} 

