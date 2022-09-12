#include<stdio.h>
float squarearea(  float rad);
float areacircle(float side);
float rectangle(float a, float b);

int main(){
	
	float a;
	float b;
	float rad;
	float side;
	
	printf("Entr the value of a and b:");
	scanf("%f",&a);
	printf("Entr the value of a and b:");
	scanf("%f",&b);
	printf("Entr the value of rad:");
	scanf("%f",&rad);
//	printf("Entr the value of a and b:");
//	scanf("%f",&side);
	printf("area of rectangle %.3f\n",rectangle(a,b));
	printf("erea of square is %.3f",squarearea(rad));
	
	return 0;
}

float rectangle(float a, float b){
	return a * b ;	
}
float squarearea(  float rad){
return rad*rad;
}
