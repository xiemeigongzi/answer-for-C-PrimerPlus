#include <stdio.h>
int main()
{
	int years=0;
	double a=100;
	double b;
	b=a-years*10.0;
	//a=100*(1.08);
	while(a>0){
		years++;
		a=a-10.0;
		a*=1.08;
		
		printf("years=%d a=%f\n",years,a );
	}
	printf("years=%d", years);
	return 0;
}
