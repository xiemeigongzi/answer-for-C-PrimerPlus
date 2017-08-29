#include <stdio.h>
int main()
{
	int x=1;
	int cnt=0;
	while(cnt<50)
	{

		int i=1;
		int is_Prime=1;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				is_Prime=0;
				break;
			}
		}
		if(is_Prime=1){
		cnt++;
		printf("%d is Prime.\n",x);
		
		}
		x++;	
	}
	return 0;
}
