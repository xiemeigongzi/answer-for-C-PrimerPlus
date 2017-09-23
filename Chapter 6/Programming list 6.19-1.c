#include <stdio.h>
int main()
{
	int i;
	printf("enter the times you have tested.\n");
	int t;
	scanf("%d", &t);
	printf("Yes, you have confirmed that there are %d times to be inputted.\n", t);
	printf("Now input your every score.\n");
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("we have to confirm what you have input again.\n");
	for(i=0;i<t;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	int sum=0;
	float average;
	int PAR = 72;
	for(i=0; i<t;i++)
	{
		sum+=a[i];
	}
	average = 1.0*sum/t;
	printf("sum of scores = %d, average = %.2f \n", sum, average);
	printf("that is a handicap of %0.f.\n", average -PAR);
	return 0;
}
