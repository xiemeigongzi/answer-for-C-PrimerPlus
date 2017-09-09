#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	scanf("%d", &x);
	int ret=1;
	int i;

		if(x%2==0){
			if(x!=2){
				ret=0;
			}
		}
		for(i=2;i<sqrt(x);i=i+2){
			if(x%i==0){
				ret=0;
				break;
			}
		}
		
		if(ret==1){
			printf("%d is a Prime.\n",x);
		}
		else{
			printf("%d is not a Prime.\n",x);
		}
		return 0;
	}
