#include <stdio.h>
int main()
{
	double a;  // m a=100+10*m
	double e=100;  // n e=100*(1.05)^n; 
	int m,n;
	int years=0;
    //a=100+10*years;
    //e=e*1.05
    
	while(e>a)
	{
		a=100+10*years;
		e*=1.05;
		years++;	
	}
	printf("%d", years);
	
	return 0;
}
