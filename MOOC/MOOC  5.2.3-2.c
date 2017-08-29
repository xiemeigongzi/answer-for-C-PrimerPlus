#include <stdio.h>
int main()
{
	int x;
	int exit=0;
	int one, two, five;
	scanf("%d", &x);
	for(one=0;one<=x*10;one++)
	{
		for(two=0;two<=x*5;two++)
		{
			for(five=0;five<=x*2;five++){
				if(one+two*2+five*5==x*10){
					printf("%d , %d and %d get %d .\n", one, two, five, x);
					exit=1;
					break;
				}
			}
			if(exit==1)
			break;
		}
	if(exit==1)
	break;
	}
	return 0;
}
