#include <stdio.h>
int main()
{
	int i=0;
	while(i<3)
	{
		switch (i++){
			case 0: printf("fat ");
			case 1: printf("hat ");
			case 2: printf("cat ");
			default: printf(" Oh no!");
			
		}
		putchar('\n');   //  No  break; go through 
	}
	return 0;
}
