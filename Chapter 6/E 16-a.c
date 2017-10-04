#include <stdio.h>
int main()
{
	float a=100,b=100;
	int year;
	
	for(year=0;a<=b ;year++)
	{
		a*=1.05;
		b+=10;
	}
	printf("%d", year);
	
	return 0;
}
