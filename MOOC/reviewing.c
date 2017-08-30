#include <stdio.h>
int main()
{
	int minute1, hour1;
	int minute2, hour2;
	scanf("%d",&hour1);
	scanf("%d",&minute1);
	scanf("%d",&hour2);
	scanf("%d",&minute2);
	int a;
	a=hour1*60+minute1;
	int b;
	b=hour2*60+minute2;
	int t=0;
	t=a-b;
	int c,d;
	// hour1 bigger than hour2;
	if(t>60)
	{
		c=t/60;
		d=t%60;
		printf("there is %d hour and %d minutes\n",c,t);
	}
	else{
		printf("there is %d minutes\n",t);
	}
	
	return 0;
}
