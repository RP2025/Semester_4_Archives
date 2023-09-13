#include <stdio.h>
void reverseorder(int b[], int n);
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
    reverseorder(a, n);
    return 0;
}
void reverseorder(int b[], int n)
{
    if (n > 0)
    {
        printf("%d ", b[n - 1]);
        reverseorder(b , n - 1);
    }
}