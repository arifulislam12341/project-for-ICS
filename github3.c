#include <stdio.h>
int main() {
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    if (x <= 0.0) {
        if (x == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } else
        printf("You entered a positive number.");
    return 0;
}
