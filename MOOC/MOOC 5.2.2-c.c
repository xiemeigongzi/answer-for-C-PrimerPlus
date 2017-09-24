#include <stdio.h>
int main()
{
	int i;
	int count=0;
	
	for(i=1; count<50;i++)
	{
		int j;
		int isPrime =1;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			count++;
		printf(" %d\t", i);
		if(count%5==0)
		printf("\n");
		}
	}
	return 0;
 } 
