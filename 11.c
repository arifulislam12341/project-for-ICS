#include <stdio.h>
int main() {
    int a, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &a);
    while (a != 0) {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
