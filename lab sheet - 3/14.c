#include <stdio.h>
int main() {
    int i, temp, digit, sum;
    for (i = 100; i <= 500; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
