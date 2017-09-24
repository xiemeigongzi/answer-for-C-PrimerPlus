#include <stdio.h>
int main()
{
	int x;
	scanf ("%d", &x);
	int t=x;
	int mag=1;
	while(t>9)
	{
		t=t/10;
		mag=mag*10;
	}
	printf("mag= %d \n",mag);
	
	int ret=0;
	t=x;
	while(mag>0)
	{
		int d=t/mag;
			printf("%d\t",d);
	
		t=t%mag;
			mag=mag/10;
		ret=ret*10+d;
	
	}
	printf("%d\n", ret);
	
	return 0;
}
