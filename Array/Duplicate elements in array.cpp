//5. Write a program in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int main()
{
	int arr[100],n,i,j;
	printf("Enter limit of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements stored in the array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
printf("\nDuplicate clements in the array are:");
for(i=0; i<n; i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d ",arr[i]);
    }
   }
   }
  return 0;
 }
