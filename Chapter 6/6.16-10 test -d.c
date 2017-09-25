#include <stdio.h>
int product();
int main()
{
	printf("enter two numbers : min and max:");
	int min, max;
	
    int a;	
	a=scanf("%d %d", &min, &max);
	while(a==2 && min<max){
		if(min>=max)
		goto exit;
		else{
		
		product( min,  max);
		printf("Enter next set of limits: ");
		a=scanf("%d %d", &min, &max);
		product(min,max);
	}}
	exit:
	printf("Done!");
	return 0;
}

int product(int min, int max)
{
	int i;
	int sum=0;
	for(i=min;i<=max;i++)
	{
		sum+=i*i;
	}
	printf("the sum of the squares from %d to %d is %d.\n", min, max, sum);
	
}
