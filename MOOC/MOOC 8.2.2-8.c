#include <stdio.h>
int main()
{
	int i;
	int mask=1;
	for(i=1;mask<=100;i++)
	{
		int j;
		int ret=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0){
			ret=0;
			break;	
			}
		}
		if(ret==1){
			printf("%d\t",i);
		}
		mask++;
	}
	
	
	
	return 0;
}
