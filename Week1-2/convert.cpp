#include <stdio.h>
#include <math.h>

long convert(int n);

int main() {
    int n;
    printf("Decimal Converter\nEnter a number: ");
    scanf_s("%d", &n);
    printf("%d (Decimal) is %ld (Binary)", n, convert(n));
    return 0;
}

long convert(int n) {
    long binary = 0;
    int rmdr, i = 1;
    while (n != 0) {
        rmdr = n % 2;
        n /= 2;
        binary += rmdr * i;
        i *= 10;
    }
    return binary;
}