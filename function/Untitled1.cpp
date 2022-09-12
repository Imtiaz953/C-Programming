#include<stdio.h>
int main()
{
	char ch[100],i=0;
	scanf("%s",&ch);
	while(ch[i]!='\0')
	{
		if(ch[i]=='H'||ch[i]=='Q'||ch[i]=='9'||ch[i]=='+')
		{
			printf("Yes");
		}
		
		else{
	printf("NO");
}
		break ;
	}

return 0;
}
