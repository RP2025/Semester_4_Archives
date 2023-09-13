#include <stdio.h>
int palindrome(char a[], int n, int k);
int main()
{
    int n;
    printf("size of string :");
    scanf("%d", &n);
    char a[n];
    printf("string :");
    scanf("%s", a);
    int k = 0;
    int x = palindrome(a, n-1, k);
    if (x == 0)
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }

    return 0;
}
int palindrome(char a[], int n, int k)
{
    if (n < k )
    {
        return 1;
    }
    else if (a[k] == a[n - k])
    {
        k++;
        return palindrome(a, n, k);
    } 
    else if (a[k]!=a[n-k])
    {
        return 0;
    }

}