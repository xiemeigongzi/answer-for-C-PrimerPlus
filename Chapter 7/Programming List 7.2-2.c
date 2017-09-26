#include <stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	while(a!='\n')
	{
		if(a==' '){
			printf("%c",a);
		}
		else{
			printf("%c", a+1);
		}
		scanf("%c", &a);
	}	
	return 0;
}
