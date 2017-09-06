#include <stdio.h>
int main()
{
	int x=1;
	int isPrime=1;
	int i;
	int cnt=0;
	while(cnt<=50){
		x++;
		int k;
		for(k=2;k<x;k++){
			if(x%k==0){
				isPrime=0;
				//printf("x=%d k=%d\n",x,k);
				//break;
			}
		}
		if(isPrime==1){
			printf("%d is a Prime.\n",x);
			cnt++;
		}	
	}
	return 0;
}
