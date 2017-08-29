#include <stdio.h>
int main()
{
	int cnt=0;
	int x=1;
	
	while(cnt<50){
		int i=1;
		int is_Prime=1;
		for(i=2;i<x;i++){
		if(x%i==0){
			is_Prime=0;
		}
		}
		if(is_Prime==1){
			cnt++;
			printf("%d is a Prime\n", x);
		}
		x++;
	}
	
	return 0;
}
