#include <stdio.h>
int main() {
    int x, i;
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    printf("Factors of %d are: ", x);
    for (i = 1; i <= x; ++i) {
        if (x % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
