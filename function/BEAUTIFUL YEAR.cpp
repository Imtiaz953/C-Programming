#include<stdio.h>
int main()
{
    int a,b,c,d,a1,b1,c1,d1,i,y,sum=0,temp;
    printf("Enter a year:");
    scanf("%d",&y);
    for(i=y+1;i<10000;i++){
        temp=i;
        a=temp/10;
        a1=temp%10;
        b=a/10;
        b1=a%10;
        c=b/10;
        c1=b%10;
        d=c/10;
        d1=c%10;
        if(a1!=b1&&a1!=d1&&a1!=c1&&b1!=c1&&b1!=d1&&d1!=c1)
        
        break ;
        
    }
    
   printf("%d",i); 
   return 0 ;
}

