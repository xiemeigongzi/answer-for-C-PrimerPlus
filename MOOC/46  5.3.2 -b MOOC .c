#include <stdio.h>
int main()
{
	int x=13425;
	int t=x;
	int ret=0;
	while(t>0){
		int d;
		d=t%10;
		ret=ret*10+d;
		t=t/10;
		printf("%d\n",ret);
	}
	t=ret;
	while(t>0){
		int d,ret=0;
		d=t%10;
		ret=ret*10+d;
		
		t=t/10;
		printf("%d",ret);
	}
	return 0;
}
