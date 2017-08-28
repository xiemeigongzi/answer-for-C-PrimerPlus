#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	
	printf("Compare two numbers:\n");
	scanf("%d %d", &a, &b);
	
	int max=0;
	if(a>b){
		printf("max=a\n");
	}
	else{
		printf("max=b\n");
	}
	return 0;
}
