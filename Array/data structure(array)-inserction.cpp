#include<stdio.h>
int main()
{
	int n,arr[100],i,add=7,pos=3;
	
	
	printf("int the limit of :");
	scanf("%d",&n);
	
	printf("Enter the elements in array:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	
}
for(i=0;i<n;i++){
		printf("%d ",arr[i]);		
}
printf("\n");

for(i=pos-1;i<=n;i++){
	arr[i+1]=arr[i];
	
}
arr[pos-1]=add;

for(i=0;i<=n;i++){
		printf("%d ",arr[i]);

}

return 0;
}
