#include <stdio.h>
int main()
{
	int a;
	int count=0;
	int sum=0;
	
	scanf("%d", &a);
	
	while(a!=-1)
	{
		sum=sum+a;
		count=count+1;
		scanf("%d", &a);	
	}
	printf("average is %f\n", 1.0*sum/count);
	return 0;
}
