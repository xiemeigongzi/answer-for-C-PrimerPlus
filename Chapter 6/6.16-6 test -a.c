#include <stdio.h>
int main()
{
	int min,max;
	scanf("%d %d", &min, &max);
	int i;
	for(i=min;i<=max;i++){ 
	printf("%d %d %d\n", i, i*i, i*i*i); 
	//printf("%d^2 = %d  %d^3 = %d\n",i,i*i,i,i*i*i); 
	
	
	} 
	return 0;
}
