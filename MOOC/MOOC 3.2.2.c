#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int f;
	if (x<0)
	{f=-1;printf("%d", f);
	}
	else if(x==0){
		f=0;
		printf("%d", f);
	}
	else{
		f=2*x;
		printf("%d", f);
	}
	return 0;
}
