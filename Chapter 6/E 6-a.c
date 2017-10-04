#include <stdio.h>
int main()
{
	int up, low;
	scanf("%d", &up);
	scanf("%d", &low);
	printf(" integer   square   cube\n");
	int i;
	for(i=up; i<=low; i++)
	{
		printf(" %d   %d   %d\n ", i, i*i, i*i*i);
		
	}
	
	
	return 0;
}
