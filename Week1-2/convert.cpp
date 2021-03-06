#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

long convert(int n);

int main() {
    int n;
    printf("Decimal Converter\nEnter a number: ");
    scanf("%d", &n);
    printf("%d (Decimal) is %ld (Binary)", n, convert(n));
    return 0;
}

long convert(int n) {
    long binary = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}
