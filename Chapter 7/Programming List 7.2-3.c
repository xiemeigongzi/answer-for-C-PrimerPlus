#include <stdio.h>
int main()
{
	char a;
	a=getchar();
	while(a!='\n')
	{
	    if(a==' ')
		putchar(a);
		else{
			putchar(a+1);
		}
		a=getchar();	
	}	
	return 0; 
	
	} 
