#include <stdio.h>
#include <string.h>
#define Pi 3.14159
int main()
{
	float area, circum, radius;
	
	printf(" what is the radius of your pizza?\n");
	scanf("%f",&radius);
	area= Pi*radius*radius;
	circum= 2.0*Pi*radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circum ference = %1.2f, area = %1.2f\n", circum, area);
	
	return 0;
 } 
