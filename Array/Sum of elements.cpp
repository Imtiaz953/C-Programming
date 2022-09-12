//3.Write a program in C to find the sum of all elements of the array
#include<stdio.h>
int main()
{
	int arr[10],n,i,sum=0;
	printf("Enter limit of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements stored in the array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
		sum+=arr[i];
	}
	printf("\nsum of elements is = %d ",sum);
	return 0;
}
