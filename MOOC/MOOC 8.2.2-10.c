#include <stdio.h>
int main()
{
	int a[100];
	a[0]=2;
	
	int count=0;
	
	int i;
	for(i=1;count<100;i++)
	{
		int k;
		int isPrime=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			a[count++]=i;
			printf("%d\t",i);
		}
	}
	for(i=0;i<100;i++)
	printf("%d\t",a[i]);
	return 0;
}
