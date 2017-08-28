#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d", &x);
	int n=0;
	
	do 
	{
		x/=10;
		n=n+1;
	} while(x>0);
	
	printf("%d",n); 

	return 0;
}
