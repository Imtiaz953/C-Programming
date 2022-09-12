#include <stdio.h>
#include<string.h>
int main() {
	int n,i,len;
	char s[100];
	for(i=0;s[i]!='\0';i++){
		scanf("%s",s);
		len = strlen(s);
		if(len>10){
			printf("%c%d%c",s[0],len-2,s[len-1]);
		}
		else{
			printf("%s",s);
		}
	}		
	return 0;
}
