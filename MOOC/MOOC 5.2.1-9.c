#include <stdio.h>
int main()
{
	int x=100;
	int k=1;
	while(k<=100)
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
	k++;
	}
	return 0;
}
