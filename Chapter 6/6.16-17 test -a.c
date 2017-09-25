#include <stdio.h>
int main()
{
	int years=0;
	double a=100;
	double b;
	b=a-years*10.0;
	//a=100*(1.08);
	while(b>=0){
		years++;
		a*=1.08;
		printf("years=%d a=%f",years,a );
		b=a-years*10.0;
	}
	printf("years=%d", years);
	return 0;
}
