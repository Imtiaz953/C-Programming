#include<stdio.h>
int sort(int arr[], int n);
int binarySearch(int arr[], int x, int low, int high);
int main()
{
	int n,arr[500],i;
	printf("Enter the number of data you want to input:");
	scanf("%d",&n);
	//input data from user
	printf("Enter your data to sorting:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	//printing data back to user
	printf("data before sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//function call 1
	sort( arr, n);
	printf("\nData after sorting assending order:\n");
	//printing the assending data
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//taking the number from user to find in data
int x;
printf("\nEnter number to find in data:\n");
scanf("%d",&x);
//function call 2
  int result = binarySearch(arr, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
	
	return 0;
}
//function declaration 1
int sort(int arr[], int n){
	
	int  i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j]){
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}	
}
//function declaration 2
int binarySearch(int arr[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}


