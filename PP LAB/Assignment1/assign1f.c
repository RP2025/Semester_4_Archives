#include <stdio.h>
int findinteger(int b[], int k, int n);
int main()
{
    int n;
    printf("total no of integer :");
    scanf("%d", &n);
    int a[n];
    printf("numbers:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k;
    printf("number you want to find in the list :");
    scanf("%d", &k);
    int j = findinteger(a, k, n);
    if (j != 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
int findinteger(int b[], int k, int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (b[0] != k)
    {
        return findinteger(b + 1, k, n - 1);
    }
    else
    {
        return n;
    }
}