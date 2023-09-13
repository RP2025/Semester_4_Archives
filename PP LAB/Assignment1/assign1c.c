#include <stdio.h>
#include<string.h>
int compare(char s1[],char s2[]);
int main()

{
    int n;
    printf("The length of strings is : ");
    scanf("%d",&n);
    char s1[n],s2[n];
    printf("Enter the first string: ");
    scanf("%s",s1);
    printf("Enter the second string: ");
    scanf("%s",s2);
    printf("%d",compare(s1,s2));

return 0;
}
int compare( char s1[],char s2[])
{
    int a;
    a=strlen(s1);
    if(a==0)
    {
        return 0;
    }
    else if(s1[0]>s2[0])
    {
        return -1;
    }
    else if(s2[0]>s1[0])
    {
      return 1;
    }
    else{
        return compare(s1+1,s2+1);
    }

}
