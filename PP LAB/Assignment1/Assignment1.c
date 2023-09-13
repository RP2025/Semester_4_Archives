#include<stdio.h>
#include<string.h>
#include <stdlib.h>

//Factorial of Numbe
long int fact(int n){
        if(n == 1 || n == 0){
                return 1;
        }

        else{
                return n*fact(n-1);
        }

        //printf("%d", factt)
}

//Sum of n number

long int sumn(int n){
        if( n == 1) {
                return 1;
        }

        else {
                return n + sumn(n-1);
        }
}

/*
Problem 3
String comparison:Compare strings s1 and s2 - print 0 if both are same, print -1 if
alphabetically s1 comes before s2 and print 1 if alphabetically s1 comes after s2.
*/

int strCmp(char string1[], char string2[], int n1, int n2, int index) {
    if (index < n1 && index < n2) {
        if (string1[index] == string2[index]) {
            return strCmp(string1, string2, n1, n2, index + 1);
        } else if (string1[index] < string2[index]) {
            return -1;
        } else {
            return 1;
        }
    } else if (index < n1) {
        return 1;
    } else if (index < n2) {
        return -1;
    } else {
        return 0;
    }
}

/*
PROBLEM 4:
Find largest among n integers
If n = 1 then the single integer itself is the largest [Step 1]
Else the largest integer is the larger one between the last integer and largest among the remaining
integers. [Step 2]
*/

int largestNumber(int array[], int size, int index) {
    if (index == (size - 1))
        return array[index];
    else {
        int nextLargeNumber = largestNumber(array, size, index + 1);
        return (array[index] > nextLargeNumber ? array[index] : nextLargeNumber);
    }
}



int main()
{       int ch;
        int n;
        int arr[100];
        int i , largestValue;
        int SIZE = 100;
        char string1[SIZE], string2[SIZE];
        printf("Enter the number for the operation you want to perform \n");
        printf("1:Factorial of a number \n2:Sum of n integers \n3:To compage strings");
        scanf("%d",&ch);
        switch(ch){
                case 1: printf("Enter the number");
                        scanf("%d",&n);
                        printf("%ld" , fact(n));

                case 2: printf("Enter the number");
                        scanf("%d",&n);
                        printf("%ld" , sumn(n));
                
                case 3: printf("Enter string 1: ");
                        scanf("%s", string1);
                        getchar();
                        printf("Enter string 2: ");
                        scanf("%s", string2);
                        getchar();
                        int n1 = strlen(string1);
                        int n2 = strlen(string2);
                        int comparedValue = strCmp(string1, string2, n1, n2, 0);
                        printf("The compared value: %d\n", comparedValue);
        
                case 4: printf("Enter the number of integers");
                        scanf("%d",&n);
                        printf("Enter the numbers:\n");
                        for (int i = 0; i < n; i++){
                                scanf("%d", &arr[i]);
                        }

                        largestValue = largestNumber(arr, n, 0);
                        printf("Largest among n integers: %d\n", largestValue);
        }
        return 0;
}
