#include <stdio.h>
int main()
{
	int x=64;
	int t=64;
	int n=0;
	
	while(x>=2)
	{
		x=x/2;
		n++;
	}
	printf("log2 of %d is %d", t,n);
	return 0;
}


// 1 2 3 4 5 6 
   //2 4 8 16 32 64
