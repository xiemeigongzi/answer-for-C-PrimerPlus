#include <stdio.h>

int main()
{
	char *t="title";
	char *s;
	s=t;
	printf("%p\n", s);
	printf("%p\n", t);
		
	int i;
	for(i=0;i<sizeof(t)/sizeof(t[0]);i++)
	{
		printf("s[%d]=%c %p\n",i,s[i],&s[i]);
		}	
	return 0;
}
