#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=i;j++){
			printf("%d*%d=%d",j,i,i*j);
			if(i*j<10){
				printf("   ");
			}
			else{
				printf("  ");
			}
					}
	printf("\n");}
	
	return 0;
}
