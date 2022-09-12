//1. Write a program in C to store elements in an array and print it.
#include<stdio.h>
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++){
		printf("elements-%d: %d\n",i,arr[i]);
	}
	
	return 0;
}
