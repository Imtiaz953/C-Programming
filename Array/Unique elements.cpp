#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;

       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0; j<n+1; j++)
        {
        
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}

