#include <stdio.h>
int main()
{
	int x=7000;
	int t=x;
	int mask=1;
	while(t>9){
		mask=mask*10;
		t=t/10;
	}
	printf("%d\n", mask);
	
	while(mask>0){
		int d;
		d=x/mask;
		x=x%mask;
		printf("%d ", d);
		mask=mask/10;
	}
	return 0;
}
