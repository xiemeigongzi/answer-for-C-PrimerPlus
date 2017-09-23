#include <stdio.h>
int main()
{
	int row;
	char ch;
	
	for(row=1;row<=8;row++)
	{
		for(ch='A'; ch<='A'+10;ch++)
		{
			printf("%d%c",row,ch);
			
		}
	printf("\n");
	}
	
	return 0;
}
