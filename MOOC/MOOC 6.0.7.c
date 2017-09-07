#include <stdio.h>
int main()
{
	int a=12,b=16;
	//scanf("%d %d", &a, &b);
	int i=1;
	int t;
	int ret;
	int min;
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	for(i=1;i<=min;i++)
	{
		if(a%i==0){
			if(b%i==0){
				t=i;
				printf("%d\n",t);
			}
		}
	}
	
	printf("ret=%d/%d",a/t,b/t);
	return 0;
}
