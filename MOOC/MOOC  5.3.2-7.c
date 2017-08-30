#include <stdio.h>
int main()
{
	int mask=10000;
	int x=70000;
	int d;
	do {
		d=x/mask;
		printf("%d",d);
		if(mask>9){
		printf(" ");}
		x=x%mask;
		mask=mask/10;
		
		}
		//printf(" x=%d, mask=%d, d=%d \n",x,mask,d);
	while(mask>0);
	return 0;
}
