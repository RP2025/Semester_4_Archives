#include <stdio.h>
int factorial(int n);
int main()
{
    int a, x;
    scanf("%d", &a);
    x = factorial(a);
    printf("factorial of %d is %d", a, x);

    return 0;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * factorial(n - 1);
}
