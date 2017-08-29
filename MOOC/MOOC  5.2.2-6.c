#include <stdio.h>
int main()
{
	int x=1;	
	int cnt=0;
	while(cnt<50)
	{
			int i;
			int is_Prime=1;
			int a;
		for(i=2;i<x;i++)
		{
			a=x%i;
			if(a==0){
				is_Prime=0;
				break;
			}
		}
		if(is_Prime==1){
		cnt++;
		printf("%d is a Prime\n", x);	}
		x++;
	}	
	return 0;
}
