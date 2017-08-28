#include <stdio.h>
int main()
{
    int a=0, b=0, c=0;
	printf("Input 3 numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	int i=0;
	{
	if(a>b)
	{
	i=a;
	}
	else{
		i=b;
	}
}
	{
	if(i>b)
	{
		printf("the max is %d\n",i);
	}
	else{
		printf("the max is %d\n",b);
	}
}
}
