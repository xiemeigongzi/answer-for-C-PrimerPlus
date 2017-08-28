#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d", &x);
	int a=0;
	if(x>0)
	   a=1;
	else if(x==0)
	   a=0;
	else 
	   a=-1;
	     
	switch(a){
		case 1:
			printf("NUm is %d",x*2);
			break;
		case 0:
			printf("NUm is %d",0);
			break;
		case -1:
		printf("Num is -1");
	}
	return 0;
}
