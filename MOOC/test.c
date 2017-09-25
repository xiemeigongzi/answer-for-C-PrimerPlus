#include <stdio.h>
int main()
{
	int a=12 , b=18;
	int i;
	int c;
	int isPrime=1;
	for (i=2;i<=12;i++){
		if(b%i==0){
			if(a%i==0){
				isPrime=0;
				break;	
			}
		}
		
		}
		if(isPrime==1){
			c=i;
	}
	
	printf("%d", c);
	return 0;
 } 
