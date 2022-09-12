#include<stdio.h>
int sum(int c, int d);

int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	
	int s =sum( c,b);
     
     printf("sum is %d",s);
     return 0;
}
	int sum( int x, int y){
		return x+y;
	}

