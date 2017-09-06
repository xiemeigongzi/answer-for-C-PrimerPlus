#include <stdio.h>
int main()
{
	int n=9;
	int i=1;
	while(i<=9){
		int j=1;
		while(j<=i){
	printf("%d*%d=%d",j,i,i*j);
		if(i*j<10){
			printf("   ");
		}
		else{
			printf("  ");
		}
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}
