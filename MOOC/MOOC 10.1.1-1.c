#include <stdio.h>
int main()
{
	char s[]="hello world!";
	printf("%p\n",s);
	printf("%p\n",&s[0]);
	int i;
	for(i=0; i<sizeof(s)/sizeof(s[0]);i++)
	{
		printf("s[%d]=%c=%p\n",i,s[i],&s[i]);
	}
	 
	return 0;
}
