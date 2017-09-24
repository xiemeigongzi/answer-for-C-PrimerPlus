#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int i;
	int max, min;
	if(a>b){
	max=a;
	min=b;
	}
		else{
			max=b;
			min=a;
	}
	int ret;
	for(i=1; i<min;i++) 
	{
		if(max%i==0 && min%i==0 )
		{
				printf("%d is the One.\n",i); 
				ret=i;
		}
	}
	printf("%d", ret);
	return 0;
 } 
