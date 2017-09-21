#include <stdio.h>

int main()
{
	float cm;
	printf("enter your height (cm)");
	scanf("%f", &cm);
	int feet;
	float inches1;
	float inches;
	while(cm>0)
	{
		inches1=cm/2.54;
		feet= inches1/12;	
		inches= (cm-feet*30.48)/2.54;
		printf("%f cm = %d feet and %.1f inches\n", cm, feet, inches);
		printf("enter a height in centimeters (<=0 quit):");
		scanf("%f",&cm);
	}
	printf("bye!");
	return 0;
 } 
