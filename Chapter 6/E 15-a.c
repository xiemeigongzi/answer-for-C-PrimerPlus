#include <stdio.h>
#include <string.h>
int main()
{
	char a[255];
	int i;
	scanf("%s",a);
	while(i!='\n'&& i!=' '){

	for(i=strlen(a);i>=0;i--)
	{
		printf("%c",a[i]);
	}
	scanf("%s",a);
}
	return 0;
}
