#include <stdio.h>
int main(void)
{
	int x;
	int n=10;
	
	scanf("%d", &x);
	
	n++;
	x/=10;
	
	while (x>0){
	n++;
	x/=10;
    }
	printf("%d \n", n);
	return 0;
}
