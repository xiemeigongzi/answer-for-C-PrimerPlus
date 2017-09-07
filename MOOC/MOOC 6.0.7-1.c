#include <stdio.h>
int main()
{
	int a=12,b=16;
	int m,n;
	m=a;  n=b;
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d %d %d\n",a , b, t);
	printf("%d/%d\n",m/a,n/a);
	return 0;
}
