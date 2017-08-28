#include <stdio.h>
double main()
{
	double price=0;
	double bill=0;
	
	printf("Input the price\n");
	scanf("%lf",&price);
	
	printf("Input your bill: \n");
	scanf("%lf",&bill);
	
	double a=bill-price;
	if (a>0){
		printf("Charge: %f",a);
	}
	else {
		printf("Need more %f",(-a));
	}
	
}
