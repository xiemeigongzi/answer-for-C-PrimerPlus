#include <stdio.h>
int main()
{
	int cnt=0;
		int x;
		for(x=1;cnt<50;x++){
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
		printf("%d is a Prime\n", x);	}}
		cnt++;	
	return 0;
}
