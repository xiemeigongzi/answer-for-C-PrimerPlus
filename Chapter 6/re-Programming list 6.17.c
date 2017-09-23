#include <stdio.h>
int main()
{
	const int ROWS=6;
	const int CHARS =10;
	
	int row;
	int ch;
	
		for(row =0; row< ROWS;row++)
	{
		for(ch='A';ch<('A'+CHARS);ch++)
			printf("%c", ch);
			print("\n");
	} 
	
	return 0;
 } 
