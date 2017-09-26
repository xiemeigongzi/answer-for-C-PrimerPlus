#include <stdio.h>
int main()
{
	char ch;
	ch=getchar();
	int cnt=0;
	while(ch!='\n')
	{
		if(ch!='"'&& ch!='\'')
		{
		cnt++;}
		ch=getchar();
	 } 
	
	printf("%d",cnt);
	return 0;
}

// I didn't read the "I'm a Programming Fool" best seller.
