#include <stdio.h>
int main()
{
	int x;
		int isPrime=1;
	for(x=1;x<=100;x++){
	int i;

	for(i=2;i<x;i++){
		
		if(x%i==0)
		{
			isPrime=0;
			break;
		}
	} 
}
	if(isPrime==1){
		printf("%d is a Prime.\n",x);
	}
	return 0;
}
