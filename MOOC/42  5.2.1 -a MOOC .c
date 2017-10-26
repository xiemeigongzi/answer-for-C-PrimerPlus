#include <stdio.h>
int main()
{
	int x=6;
	int isPrime=1; // x is prime
	int i;
	for(i=2; i<x;i++)
	{
		if(x%i==0){
			isPrime=0;
			break;
		}
	}
	if(isPrime==1){
		printf(" x is a Prime.\n");
	}
	else{
		printf(" x is not a Prime.\n");
	}
	return 0;
}
