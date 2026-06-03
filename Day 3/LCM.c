#include <stdio.h>

int main() {
    int a, b, gcd, temp, x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    printf("LCM = %d", (a * b) / gcd);

    return 0;
}