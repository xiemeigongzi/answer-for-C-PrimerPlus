#include <stdio.h>
int main()
{
	int a[26];
	char c='a';
	int i;
	for(i=0,c='a';i<26 ,c<='z';i++,c++)
	{
		a[i]=c;
		printf("a[%d]=%c\n",i,c);
	}
	
	return 0;
}
