#include <stdio.h>
int main()
{
	int n=5;
	while (n<7)
	{
		printf("n=%d \n",n);
		n++; // n++ 是自增前的值；   ++n 是自增后面的值； 
		printf("now n= %d\n", n);
	}
	printf("the loop has finished.\n"); 
	
	return 0;
}
