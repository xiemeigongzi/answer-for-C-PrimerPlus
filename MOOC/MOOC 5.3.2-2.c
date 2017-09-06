#include <stdio.h>
int main()
{
	int mask=0;
	int x=13425;
	int t;
	t=x;
	int cnt=1;
	int a,b;
	while (t>10)
	{
		cnt=cnt*10;
		t=t/10;	
	}
	//printf("%d\n",cnt);
	
	while(cnt>0){
		a=x/cnt;
		x=x%cnt;
		cnt=cnt/10;
		printf("%d ",a);
	}
	return 0;
}
