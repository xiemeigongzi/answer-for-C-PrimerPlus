#include <stdio.h>
int main()
{
	printf("please enter one number\n");
	int n;
	scanf("%d", &n);
	while (n!=6)
	{
		printf("that number is not what i want.Keep typing\n");
		scanf("%d", &n);
	}
	printf("Yes , that is really what I want.\n");
	return 0;
}
