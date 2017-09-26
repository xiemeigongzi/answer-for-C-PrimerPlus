#include <stdio.h>
#define PERIOD '.'
int main()
{
	char ch;
	int charcount=0;
	ch=getchar();
	while(ch!='.')
	{
		if(ch!='"'&&ch!='\'')
			charcount++;
			ch=getchar();
	}
	printf("there are %d non-quote characters.\n", charcount);
	
	return 0;
}
