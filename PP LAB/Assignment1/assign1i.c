#include <stdio.h>
int change(char *a, int n, char c1, char c2);
int main()
{
    int n;
    printf("length of the string :");
    scanf("%d", &n);
    char a[n];
    printf("string :");
    scanf("%s", a);
    getchar();
    char c1, c2;
    printf("character you want to change :");
    scanf("%c", &c1);
    getchar();
    printf("character you want to change with :");
    scanf("%c", &c2);
    change(a, n, c1, c2);
    printf("changed string is : %s\n",a);
    return 0;
}
int change(char *a, int n, char c1, char c2)
{
    if (n == 0)
    {
        return 1;
    }
    else if (a[0] == c1)
    {
        a[0] = c2;
        change(a + 1, n - 1, c1, c2);
    }
    else
    {
        change(a + 1, n - 1, c1, c2);
    }
}