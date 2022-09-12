//2.Write a program in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
int main()
{
	int arr[10],n,i;
	printf("Enter limit of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements stored in the array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		
		
		printf("%d ",arr[i]);
	}
	
	return 0;
}
