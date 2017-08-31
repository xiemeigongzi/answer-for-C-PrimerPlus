#include <stdio.h>
int main()
{
	int a,b;
	int t;
	scanf(" %d %d", &a, &b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("gcd=%d\n",a);
	return 0;
}

/*  t    a    b   
         12   18  
    12   18   12
	6    12   6
	0    6    0 */    
        
