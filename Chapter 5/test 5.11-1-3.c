#include <stdio.h>
#define A 60
int main()
{
	int value;
	int hour;
	int left;
	scanf("%d", &value );
	if(value<60){
		printf("minute shows %d minutes", value);}
	else{
	while(value>=0)
	{
		hour=value/A;
		left=value%A;
		printf("the hour show %d and the minute shows %d .\n", hour, left);
		scanf("%d", &value);	
	}
	}	
	return 0;
}
