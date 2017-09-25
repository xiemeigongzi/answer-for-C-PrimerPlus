#include <stdio.h>
int main()
{
	double a;
	double e=100;
	int m;   // a=100+10*m;
	int n;  // e=100*(1+0.05)^n
	for(m=1;;m++){
		a=100+10*m;
		for(n=1;;n++){
			e=e*1.05;
			if(e>=a){
				printf("m=%d n=%d\n",m,n);
				break;
			}
		}
	}	
	
	return 0;
}
