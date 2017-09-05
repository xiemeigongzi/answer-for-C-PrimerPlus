#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	
	if(x<0){
		printf("f(x)=-1");
	}
   	else if(x>0){
		x=2*x;
		printf("f(x)=%d\n",x);
	}
	else{
		printf("f(x)=0\n");
	}
	return 0;
}
