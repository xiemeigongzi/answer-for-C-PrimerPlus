#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int count[10];
	int i;
	for(i=0;i<10; i++){
		count[i]=0;
	}
	
	while(x!=-1){
		{if(x>=0){
			if(x<10){
			count[x]++;
			}
		}
		}
		scanf("%d", &x);
	}
	for(i=0;i<10;i++){
	printf("%d occurs %d time(s).\n",i,count[i]);	
	}
	
	return 0;
}
