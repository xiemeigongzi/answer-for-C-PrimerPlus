#include <stdio.h>
int main()
{
	printf("\n");
	int a[9];
	int i=0;
	for(i=0;i<=9;i++){
		a[i]=0;
		printf("a[%d]=%d\n",i,a[i]);
	}
	 printf("\n");
	 printf("Now Enter the numbers.\n");
	 int x;
	scanf("%d",&x);
	while (x!=-1){
		a[x]++;
		scanf("%d", &x);
	} 
	for(i=0;i<=9;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
