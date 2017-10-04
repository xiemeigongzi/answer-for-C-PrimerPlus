/* Í³¼ÆºÍ*/
#include <stdio.h>
int main()
{
	int a;
	int n;
	int sum=0;
	n=scanf("%d", &a);
	while(n==1)
	{
		sum+=a;
		printf("%d\n",sum);
		n=scanf("%d", &a);
		
	}
	
	return 0;
}
