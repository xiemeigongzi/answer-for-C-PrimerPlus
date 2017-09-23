#include <stdio.h>
int main()
{
	int row;
	const int ROW = 8;
	char ch;
	
	for(row=1;row<=ROW;row++)
	{
		for(ch='$';ch<=row;ch++)
		{
			printf("%c",ch);
			printf("\n");
		}
	 } 
	return 0;
}
