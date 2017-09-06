#include <stdio.h>
int main()
{
	
	int x;
	scanf("%d", &x);
	int isPrime=1;
	int i;
	for(i=2;i<=x-1;i++){
		if(x%i==0)
		{
			isPrime=0;
			printf("%d\n", i);
			continue;
		}
	}
	if(isPrime==1)
	printf("%d is a Prime.",x);
	else
	printf("%d is not a Prime.",x);
	return 0;
}
