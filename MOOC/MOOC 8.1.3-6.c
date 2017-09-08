#include <stdio.h>
int main()
{
	int x;
	int i;
	int count[10]={0};
	for(i=0;i<10;i++){
	printf("%d\t", count[i]);	
	}
	
//	for(i=0;i<10;i++){
//		count[i]=0;
//	}
	scanf("%d", &x);
	while(x!=-1){
		if(x>=0&&x<=9){
			count[x]++;
		}
		scanf("%d", &x);
	}
	for(i=0;i<10;i++){
	printf("%d occurs %d time(s)\n", i, count[i]);
	}
	return 0;
}
