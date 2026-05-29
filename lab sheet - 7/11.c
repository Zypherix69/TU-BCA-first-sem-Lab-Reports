#include <stdio.h>

union Data {
    int   i;
    float f;
    char  str[20];
};

int main() {
    union Data d;

    d.i = 42;
    printf("Integer : %d\n", d.i);

    d.f = 3.14;
    printf("Float   : %.2f\n", d.f);

    printf("Enter a string: ");
    scanf("%s", d.str);
    printf("String  : %s\n", d.str);

    printf("Size of union : %d bytes\n", (int)sizeof(d));

    return 0;
}