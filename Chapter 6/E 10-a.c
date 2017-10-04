#include <stdio.h>
int main()
{
	printf("Enter lower and upper integer limits: \n");
	int upper,low;
	int c;
	c=scanf("%d %d", &low, &upper);
	int i;
	int sum=0;
	while(c==2&&low<upper){
	for(i=low;i<upper;i++)
	{
		sum+=i*i;
		
	}
	printf("sum = %d\n", sum);
	c=scanf("%d %d", &low, &upper);
	}
	printf("end.\n");
	return 0;
}
