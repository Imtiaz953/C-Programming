#include<stdio.h>
int perfectnumber( int n);

int main(){
	int n;
    printf("Enter a number: ");
    scanf("%d", &n);
	perfectnumber(n);
	
}

int perfectnumber( int n)
{
    int i, j,sum;
	for(i=n+1; i<=100000; i++)
    {
      sum=0;
	    for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
    
        if(sum == i)
        {
            printf("next perfect number is : %d " ,i);
            break;
        }
        
}

}



