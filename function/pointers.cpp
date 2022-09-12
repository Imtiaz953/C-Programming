#include<stdio.h>
int main(){
	
	int age=55;
	int *ptr=&age;
	int _age=*ptr;
	printf("%u\n",ptr);
	printf("%u",&age);
	return 0;
}
