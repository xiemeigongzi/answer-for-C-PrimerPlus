#include <stdio.h>
int main()
{
	int days;
	const int count=7;
	int week;
	int left;
	printf("enter your days for computing.\n");
	scanf("%d", &days);
	while(days>0)
	{
		week=days/count;
		left=days%count ;
		printf("%d days are %d weeks, %d days.\n", days, week, left);
		scanf("%d", &days);	
	}
	return 0;
}
