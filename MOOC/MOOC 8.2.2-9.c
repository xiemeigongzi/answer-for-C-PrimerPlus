#include <stdio.h>
int main()
{
	int i=1;
	int mask=0;
	
	while(mask<=100)
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
			mask++;}
		
		i++;	
	
}
	return 0;}
