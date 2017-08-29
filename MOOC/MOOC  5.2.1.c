#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	
	int  i;
	int isPrime =1;
	for(i=2;i<x;i++)
	{
		if(x%i==0){
			isPrime =0;
		}
	}
	if(isPrime ==1){
		printf("x is a prime\n");}
	else {
			printf("x is not a prime\n");
	} 
	return 0;
}
