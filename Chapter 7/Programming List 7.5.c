#include <stdio.h>
int main()
{
	printf("enter one number.\n");
	int m;
	
	int i;
	int isPrime=1;
	while(scanf("%d", &m)==1)
	{
		for(i=2;i*i<=m;i++)
		{
			if(m%i==0){
				if((i*i)!=m)
				{
					printf("%d is divisible by %d and %d.\n", m,i,m/i);
				}
				else{
					printf("%d is divisible by %d.\n", m,i);
				}
			isPrime=0;
			}
			if(isPrime==1){
				printf("%d is prime.\n",m);
				printf("enter next number.\n");
				printf("enter q to quit.\n");
			}
		}
	}
	
	printf("Done!");
	return 0;
 } 
