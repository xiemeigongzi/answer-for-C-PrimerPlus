#include <stdio.h>
int main()
{
	int num;
	int sum=0;
	int n=0;
	scanf("%d", &num);
	while(num!=-1)
	{
		sum+=num;
		n++;
		scanf("%d",&num);
	}
	printf("%f", 1.0*sum/n);
	return 0;
}
