#include <stdio.h>
#include <math.h>
int isPrime();

int main()
{
	int x;
	scanf("%d", &x);
	//int isPrime();
	if(isPrime(x)==1){
		printf("%d is a Prime.\n");
	}
	else{
		printf("%d is not a Prime.\n");
	}
	return 0;
}

int isPrime( int x)
{
	int i;
	int ret=1;
	if(x%2==0&&x!=2){
		ret=0;
	}
	for(i=2;i<sqrt(x);i=i+2){
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}

