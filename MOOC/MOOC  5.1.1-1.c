#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int count=0;
	int ret=1;
	
	while(x>0)
	{
		ret=ret*x;
		x=x-1;
		//count=count+1;
	
	}
	printf("the result is : %d\n",ret);
	return 0;
}

/* x    ret
   4     4
   3     12
   2     24
   1     24 */
   
