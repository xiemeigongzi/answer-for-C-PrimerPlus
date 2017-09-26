#include <stdio.h>
int main()
{
	char a;
	a=getchar();
	while(a!='\n')
	{
	    if(isalpha(a))
		putchar(a+1);
		else{
			putchar(a);
		}
		a=getchar();	
	}	
	return 0; 
}
