#include <stdio.h>
int main()
{
	int a=12, b=18;
	int max=0;
	int c;
	if(a>b){
		max=a;
	}
	else{
		max=b;
	}
	int i;
	for(i=2;i<max;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("%d \n",c);
	return 0;
}
