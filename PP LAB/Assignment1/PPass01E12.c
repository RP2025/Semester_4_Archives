#include<stdio.h>

int findmax(int arr[], int l, int h)
{
	static int max = 0;
	if(l<h)
	{
		int mid = (l+h)/2;
		findmax(arr, l, mid);
		findmax(arr, mid+1, h);
		if(arr[mid]>max)
			max = arr[mid];
	}
	return max;
}

int main()
{
	int n;
	printf("enter no of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements: ");
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	printf("max is: %d\n", findmax(arr, 0, n-1));
}