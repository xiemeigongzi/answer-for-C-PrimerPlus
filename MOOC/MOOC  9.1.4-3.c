#include <stdio.h>

int main()
{
	char  ac[]={0,1,2,3,4,5,6,7,8,9,-1};
	char *p=&ac[0];
	
	

/*	for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++)
	{
		printf("p[%d]=%d\n",i, int *(p[i]));
	}*/
	
	//for(p=ac; *p!=-1;p++)
	//{
	//	printf("%d\n", *p++);
	//}
	
	while (*p!=-1)
	{
		printf("%d\n",*p);
		*p++;
	}
	
	
	/*int ai[]={0,1,2,3,4,5,6,7,8,9};
	int *q=ai;*/
	
	return 0;}
