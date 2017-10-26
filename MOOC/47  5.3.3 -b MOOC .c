#include <stdio.h>
int main()
{
	int a=12, b=18;
	int t;
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d  b=%d  t=%d \n",a,b,t);
	}
	printf("gcd= %d ",a);
	
	return 0;
}
