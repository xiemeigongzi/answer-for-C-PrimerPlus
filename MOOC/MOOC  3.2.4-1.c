#include <stdio.h>
int main()
{
	int x=0;
	scanf("%d", &x);
	if(x>=90)
	{
		x=1;
	}
	else if(x>=80,x<90)
	{
		x=2;
	}
	else if(x>=70,x<80)
	{
		x=3;
	}
	else if(x>=60,x<70)
	{
		x=4;
	}
	else{
		x=5;
	}
	switch(x)
	{
		case 1:
			printf(" Your score is A");
			break;
		case 2:
			printf(" Your score is B");
			break;
		case 3:
			printf(" Your score is C");
			break;
		case 4:
			printf(" Your score is D");
			break;
		default:
			printf(" Your score is E");
			break;	
	}	
	return 0;
}
