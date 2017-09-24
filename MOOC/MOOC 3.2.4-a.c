#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if(x>=95)
		{
			printf(" Your score is A+.\n");
		}
	else if(x>=90)
	{
		printf("Your score is A.\n");
		
	}
	else if (x>=80)
	{
		printf("Your score is B.\n");
	}
	else if (x>=70)
	{
		printf("Your score is C.\n");
	}
	else if (x>=60)
	{
		printf("Your score is D.\n");
	}
	else {
		printf("Your score is E.\n");
	}
	return 0;
}
