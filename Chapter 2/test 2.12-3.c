#include <stdio.h>
int main()
{
	int years=0, days=0;
	printf("Enter your years and days");
	scanf("%d %d",&years, &days);
	days=years*365+days;
	printf("You have been alive %d days, and %d years.",days,years);
	
	return 0;
}
