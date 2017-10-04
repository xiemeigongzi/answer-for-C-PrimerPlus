/* A B C D E F */
#include <stdio.h>
int main()
{
	char a;
	char b;
	for(a='F';a>='A';a--)
	{
		for(b='F';a<=b;b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}
	return 0;
}
