#include <stdio.h>
int hcf(int n1, int n2);
int main()
{
    int n1, n2;
    printf("two no. of which you want to calculate :");
    scanf("%d%d", &n1, &n2);
    printf("%d\n", hcf(n1, n2));
    return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
    {
        return hcf(n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}