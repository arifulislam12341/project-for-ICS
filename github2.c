#include <stdio.h>
int main() {
    int m;
    printf("Enter an integer: ");
    scanf("%d", &m);

    if(m % 2 == 0)
        printf("%d is even.", m);
    else
        printf("%d is odd.", m);

    return 0;
}
