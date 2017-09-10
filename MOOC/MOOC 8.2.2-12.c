#include <stdio.h>
int main()
{
	int a[100];
	a[0]=2;
	int cnt=0;
	int i;
    for(i=1;cnt<100;i++)
    {
    	int j;
    	int isPrime=1;
    	for(j=2;j<i;j++)
    	{
    		if(i%j==0)
    		{
    			isPrime=0;
    			break;
			}
		}
	if(isPrime==1)
	{
		
		printf("%d\t",i);
		a[cnt++]=i;
	}
	}
	for(i=0;i<100;i++){
		printf("a[%d]=%d\t",i,a[i]);}
	return 0;
}
