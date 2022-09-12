//#include<stdio.h>
//int main()
//{
//	int days = 2535,year,months,day;
//	year =2335/365;
//	months=(2535-(year*365))/30;
//	days=(2535-(months*30))/30;
//	
//printf("%d\n",year);	
//printf("%d\n",months);
//printf("%d",days);
//	
//}
#include <stdio.h>
int main() {
	int ndays, y, m, d;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &ndays);
	
	y =  ndays/365;
	
	ndays = ndays-(365*y);
		
	m = ndays/30;
	
	d =  ndays-(m*30);
	
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
	return 0;
}
