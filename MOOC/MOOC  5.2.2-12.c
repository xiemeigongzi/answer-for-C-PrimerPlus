#include <stdio.h>
int main()
{
	int x=1;
	int cnt=0;
	for(x=1;cnt<50;x++)
	{
		int i=1;
		int is_Prime=1;
		for(i=2;i<x;i++){
		if(x%i==0){
			is_Prime=0;
		}
		}
		if(is_Prime==1){
			cnt++;
			printf("%d \t",x);
			if(cnt%5==0)
			{
				printf("\n");
			}
	}
}
	return 0;
}
