#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	printf("Input the number.\n");
	scanf("%d",&number);
	
	int i;
	
	//int a[number];
	 int *a;
	 a= (int*)malloc(number*sizeof(int)); //occupy the space
	for(i=0;i<number;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=number-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
	free(a);
	return 0;
}
