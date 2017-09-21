#include <stdio.h>
void temperature ();
int main()
{
	double f;
	
	printf("enter a temperature :\n");
	while (scanf("%lf", &f)==1)
	{
		temperature (f);
		printf("Enter a temperature in degrees fahrenheit (q to quit): \n");
	}
	printf("bye!\n");
	return 0;
}
void temperature(double f)
{
	const double count1 =32;
	const double count2 = 273.16;
	double c;
	double k;
	c=5.0*(f-count1)/9.0;
	k=c+count2;
	printf("f= %.3f, c=%.3f, k=%.3f \n",f, c,k);

}

