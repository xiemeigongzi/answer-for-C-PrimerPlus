#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <math.h>
int isPrime();

int main()
{
	int isPrime;
	int x;
	scanf("%d", &x);
	if(isPrime==1){
	if(isPrime==1){
		printf("%d is a Prime.\n",x);
	}
	else{
		printf("%d is not a Prime.\n",x);
	}
	return 0;
}

int isPrime(int x)
{
	int ret=1;
	int i;
	if(x%2==0&&x!=2){
		ret=0;
	}
	for(i=3;i<sqrt(x);i=i+2)
	{
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
