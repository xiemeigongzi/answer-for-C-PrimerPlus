#include <stdio.h>
int main()
{
	int num;
	printf("    n   n  cubed\n");
	for(num=1; num<=6; num++)
		printf("%5d \t %5d \n", num, num*num*num);
	 
	return 0;
}
