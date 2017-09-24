#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int y;
	y=x/10;
	
	switch(y)
	{
		case 9:
			printf("Your score is A.\n");	
			break;
		case 8:
			printf("Your score is B.\n");	
			break;
		case 7:
			printf("Your score is C.\n");	
			break;
		case 6:
			printf("Your score is D.\n");	
			break;
		default :
			printf("Your score is E.\n");	
			break;	
	}
	return 0;
}
