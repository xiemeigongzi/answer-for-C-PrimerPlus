#include <stdio.h>

struct date{
	int month;
	int day;
	int year;
};

int main()
{
	struct date today;
	today=(struct date){07,31,2014};
	struct date day;
	
	struct date *pdate=&today; // get the address.
	printf("address of today is %p \n", pdate);
	
	day = today;
	day.year=2015;
	
	
	printf("today is %i-%i-%i.\n", today.year, today.month, today.day);
	printf("day is %i-%i-%i.\n", day.year, day.month, day.day);
	return 0;
}
