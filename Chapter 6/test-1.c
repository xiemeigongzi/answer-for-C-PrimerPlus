#include <stdio.h>
int main()
{
	const int ROWS=6;
	const int CHARS =6;
	
	int row;
	int ch;
	
		for(row =0; row< ROWS;row++)
	{
		for(ch='A'+row;ch<('A'+CHARS);ch++)
			printf("%c", ch);
			printf("\n");
	} 
	
	printf("%d", sizeof(float));

	printf("hello world!");
	return 0;
 } 
