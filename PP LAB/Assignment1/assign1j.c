#include <stdio.h>
int sorting(int a[], int n);
int main()
{
    int n;
    printf("length of the array : ");
    scanf("%d", &n);
    printf("numbers :");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sorting(a, n);
    
    printf("sorted array :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
int sorting(int a[], int n)
{
    if (n == 0)
    {
        return 1;
    }

    else if (n != 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (a[n-1] < a[i])
            {
                int temp = a[n-1];
                a[n-1] = a[i];
                a[i] = temp;
            }
        }
        return sorting(a, n - 1);
    }
}