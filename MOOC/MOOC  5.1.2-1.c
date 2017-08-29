#include <stdio.h>
// Prime Number 
int main()
{
	int a=0;
	scanf("%d",&a);
	
	int b=0;
	b=a;
	int i=1;
	for(i=2;i<=b-1;i++)
	{
		b=b%i;{
		if(b==0){
			printf("a is not a prime number\n");
		}
		else(b!=0);
		{
			printf("a is a prime number\n");
		}
	}
}
		return 0;
}
