#include <stdio.h>    //  0.1  0.2  0.5  = 10;
int main()
{
	int i;
	int exit=0;
	for(i=0;i<=100;i++){
		int j;
		for(j=0;j<=50;j++)
		{
			int k;
			int a;
			for(k=0;k<=20;k++)
			{
				if(0.1*i+0.2*j+0.5*k==10)
				{
					printf("%d*0.1 + %d*0.2 + %d*0.5=10\n", i,j,k);
					goto out;	
				}
			}
		
		}
	}	
	out:
	return 0;
}
