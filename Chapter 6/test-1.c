#include <stdio.h>
int main()
{
	int a;
	while((a=getchar())!=EOF)
	{
		putchar(a);
		printf("\a \n");
	}
	return 0;
}
