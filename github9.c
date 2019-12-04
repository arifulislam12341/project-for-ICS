#include <stdio.h>
int main() {
    int x, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    for (i = 1; i <= x; ++i) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
