#include <stdio.h>
int main()
{
	char ch='A';
	char i;
	for(i='A';i<='P';i++)
	{
		char j;
		for (j='A';j<i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
