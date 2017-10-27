#include <stdio.h>
int main()
{
	char *s1="Hello, World!";
	char *s2="Hello, World!";
	char s3[]="Hello, World!";
	s3[0]='B';
	
	printf("s1=%p\n",s1);
	printf("s2=%p\n",s2);
	printf("Here s1[0]=%c\n", s1[0]);
	printf("Here s2[0]=%c\n", s2[0]);
	printf("Here s3[0]=%c\n", s3[0]);
	
	return 0;
}
