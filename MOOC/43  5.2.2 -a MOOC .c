#include <stdio.h>
int main()
{
	int cnt=0;
	int x;
	for(x=1; cnt<50; x++){
		int i;
		int isPrime=1;
		for (i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			cnt++;
			printf("%d\n", x);
		}
	}
	
	
	return 0;
}
