#include <stdio.h>
int largest(int b[], int x, int n);
int main()
{
    int n, x;
    printf("how many nos are there :");
    scanf("%d", &n);
    printf("nos are :");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    x=a[0];
    printf("%d", largest(a, x, n));
    return 0;
}
int largest(int b[], int x, int n)
{
    if (n > 0)
    {  
        if (b[0] > x)
        {
            x= b[0];
            return largest(b + 1, x, n - 1);
        }
        else
        {
            return largest(b + 1, x, n - 1);
        }
    }
    else
    {
        return x;
    }
}