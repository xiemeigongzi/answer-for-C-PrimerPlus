#include <stdio.h>
int main()
{
	char ch;
	ch=getchar();
	while( ch !='\n')
	{
		if(ch == ' ')
		putchar(ch);
		else
		putchar(ch+1);

	    ch=getchar();
	}
//	putchar (ch);
	
	return 0;
}
