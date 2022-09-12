//4. Write a program in C to copy the elements of one array into another array
#include<stdio.h>
int main()
{
	int arr1[100],arr2[100],n,i,sum=0;
	printf("Enter limit of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("elements stored in first array is:");
	for(i=0;i<n;i++){
		printf("%d ",arr1[i]);	
	}
	printf("\n");
	
	printf("Elements stored in second array is: ");
	
	for(i=0;i<n;i++){
		arr2[i]=arr1[i];
	printf("%d ",arr2[i]);	
}
	return 0;
}
