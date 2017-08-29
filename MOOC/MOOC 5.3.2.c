#include <stdio.h>
int main()
{
	int x=123;
	//scanf("%d", &x);
	int i;
	int ret=0;
	while (x>0){
		i=x%10;
		ret=ret*10+i;
		printf("digit is %d\n",i);
		x=x/10;	
	}	
	printf("result is %d",ret);	
	return 0;
}

/*  
x     i    ret
123   3    3
12    2    32
1     1    321
0*/
 
