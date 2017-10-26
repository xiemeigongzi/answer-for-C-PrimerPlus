#include <stdio.h>
int main()
{
	int a=5,b=3,c=2;
	int max=0;
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c;
		}
	}
	else{ // a<b
		if(b>c)
		{
			max=b;
		}
		else{
			max=c;
		}
	}
	printf("max = %d", max);
	return 0;
}
