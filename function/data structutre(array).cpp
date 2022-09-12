#include<stdio.h>
int main()
{
	int n,arr[100],i,src,loc;
	
	
	printf("int the limit of :");
	scanf("%d",&n);
	
	printf("Enter the elements in array:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
	printf("Enter elements to search :");
	scanf("%d",&src);
loc=0;
	for(i=0;i<n;i++)
    {
    		
        if(arr[i] == src)
        {
        	loc=1;
            break ;
        }
	}
        if(loc=1){
        	printf("Search found:");
        	printf("location=%d",i+1);
        	
		}
else{
	printf("Not found");
}


    return 0;
}


