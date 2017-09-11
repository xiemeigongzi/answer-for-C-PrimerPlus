#include <stdio.h>

int main()
{
	char ac[]={0,1,2,3,4,5,6,7,8,9};
	char *p=ac;
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*p=%d\n",*p);
	printf("*(p+1)=%d\n",*(p+1));
	
	char *p1= &ac[5];
	printf("p1-p=%p\n",p1-p);
	
	printf("\n");
	
	
	
	int ai[]={0,1,2,3,4,5,6,7,8,9};
	int *q=ai;
	printf("q=%p\n",q);
	printf("q+1=%p\n",q+1);
	printf("*q=%d\n",*q);
	printf("*(q+1)=%d\n",*(q+1));
		printf("\n");
		
	int *q1= &ai[6];
	printf("q=%p\n",q);  //q=2293232
	printf("q1=%p\n",q1); //q1=2293256
	
	printf("q1-q=%p\n",q1-q);
	return 0;
}
