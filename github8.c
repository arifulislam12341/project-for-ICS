
#include <stdio.h>
int main()
{
    int x1, x2, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &x1, &x2);
    for(i=1; i <= x1 && i <= x2; ++i)
    {

        if(x1%i==0 && x2%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", x1, x2, gcd);
    return 0;
}
