#include <stdio.h>
int main()
{
	int a;
	int x;
	int i;
	a=scanf("%d", &x);
	while(a==1){
		a=scanf("%d", &x);
		i++;
	}
	
	int b[100];
	int j=0;
	while(scanf("%d", &b[j])==1,b[j]!='\n'){
			j++;
			printf("b[%d]=%d",j,b[j]);
	}
	return 0;
 } 
