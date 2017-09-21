#include <stdio.h>
#define A 60
int main()
{
	int value;
	int hour;
	int left ;
	printf("enter your time.\n");
	scanf("%d", &value);
	while(value>0)
	{
		hour = value/A;
		left= value%A;
		printf("hour shows %d and the left minutes shows %d", hour, left);
		scanf("%d", &value);
	}
	
	return 0;
}
