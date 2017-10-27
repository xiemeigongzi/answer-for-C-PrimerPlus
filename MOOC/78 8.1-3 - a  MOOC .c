#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int a[10]={0,};
	
	while(x!=-1){
		if(x>-1&&x<10){
			a[x]++;
		}
		scanf("%d", &x);
	}
	int i;
	for(i=0;i<10;i++){
		printf("a[%d] : %d times.\n",i,a[i]);
	}
	return 0;
}
