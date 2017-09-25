#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d", &a, &b);
	int i;
	int min,max;
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	int c;
	int isPrime = 1;
	for(i=2;i<=min;i++){
		if(max%i==0&&min%i==0){
			isPrime=0;
			c=i;
			printf("%d\t", c);
		}
		}
	printf("%d",c);
	printf("%d/%d=%d/%d\n",a,b,a/c,b/c);
	return 0;
}
