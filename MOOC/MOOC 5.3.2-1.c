#include <stdio.h>
int main()
{
	int x=12345;
	//scanf("%d", &x);
	int j;
 	int res=0;
	while(x>0){
		j=x%10;
		res=res*10+j;
		x=x/10;		
	}
	int i=0;
	int ret=0;
	while (res>0){
		i=res%10;
		ret=ret*10+i;
		printf("digit is %d\n",i);
		res=res/10;	
	}	
	printf("result is %d ",ret);	

	printf("\n");
	return 0;
}
