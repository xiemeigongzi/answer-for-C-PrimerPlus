#include <stdio.h>

int main()
{
	char *s="hello world!";
	//s[0]='B';
	char *s2="hello world!";
	char s3[]="hello world!";
	
	printf("s=%p\n",s);
	printf("s=%p\n",s2);
		printf("s3=%p\n",s3);
		s3[0]='B';
	printf("here is s3[0]=%c\n",s3[0]);
	printf("here is s[0]=%c\n",s[0]);
	return 0;
}
