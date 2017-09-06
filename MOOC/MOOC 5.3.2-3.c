#include <stdio.h>
int main()
{
	int x;
	x=70000;
	int mask=1;
	int t=x;
	while (t>10)
	{
		t=t/10;
		mask=mask*10;
	}
	//printf("%d",mask);
	
	while(mask>0){
		t=x/mask;
		x=x%mask;
		printf("%d",t);
		if(mask>9){
			printf(" ");
		}
		mask=mask/10;
	}
	return 0;
}
