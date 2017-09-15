#include <stdio.h>
int main(void)

{

	float a = 3.0e-23;

	float b = 950.;

	float c;



	printf("Enter an amount of water (in quarts): ");

	scanf("%f", &c);

	printf("There are %f molecules in %f quarts of water.\n", c * b / a, c);



	return 0;

}
