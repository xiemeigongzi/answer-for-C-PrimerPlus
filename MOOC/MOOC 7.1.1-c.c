#include <stdio.h>
int main()
{
	sum(1,10);
	return 0;
}

int sum(int a, int b)
{
	int i;
	int sum=0;
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	printf("%d\n",sum);
	return sum;
}
