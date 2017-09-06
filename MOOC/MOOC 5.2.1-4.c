#include <stdio.h>
int main()
{
	//int x;
	int cnt=0;
	int i;
	for(i=2; cnt<=50;i++) 
	{
		int k;
		int isPrime=1;
		for(k=2;k<i;k++){
			if(i%k==0){
				isPrime=0;
				//printf("i=%d k=%d\n", i,k);
				continue;
			}
		}
	
		if(isPrime==1)
	{
		cnt++;
		printf("%d is a Prime.\n",i);
	}
		
	}
	return 0;
}
