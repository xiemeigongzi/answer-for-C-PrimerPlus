#include <stdio.h>
int main()
{
	int x=100;
	int k;
	for(k=1;k<=x;k++)
	{
		int i;
		int isPrime=1;
	for(i=2;i<k;i++)
	{
		if(k%i==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime==1)
	printf("%d is a Prime.\n",k);
	}
	return 0;
}
