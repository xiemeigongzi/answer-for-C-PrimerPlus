#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int t=x;
	int cnt=1;
	int mask=1;
	while(t>9){
		t/=10;
		cnt++;
		mask*=10;
	}
	printf("cnt=%d, mask=%d \n",cnt, mask); 
	
	t=x;
	while (mask>0){
		int d=t/mask;
		printf("%d", d);
		if(mask>9){
			printf(" ");
		}
		t=t%mask;
		mask=mask/10;
	} 
	printf("\n"); 
	return 0;}

