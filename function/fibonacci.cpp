#include<stdio.h>
void fib(int n);
int main(){
	int num,n1=0,n2=1;
	printf("Enter limit of fibonacci series:");
	scanf("%d",&num);
	printf("\n%d %d",n1,n2);
	fib(num);
	return 0;
}

void fib(int num){
	int n1=0,n2=1,n3,i;
	
	for(i=2;i<num;++i){
		
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;	
			
}
}
