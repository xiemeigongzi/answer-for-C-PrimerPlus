#include <stdio.h>
int main()
{
	int num=0;
	
	for(printf("keep entering numbers!\n"); num!=6; ){
		scanf("%d", &num);
		printf("that is the one I do not want. \n");
	}
	
	
	printf("that is the one I want. \n");
	
	return 0;
}
