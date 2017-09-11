#include <stdio.h>

int main()
{
	int a[]={1,2.3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int *p=a;
	//*p=a;
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
	
	printf("p[%d]=%d\n",i,p[i]);}
	return 0;
}


