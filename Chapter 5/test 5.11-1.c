#include <stdio.h>
#define A 60
int main()
{
	int minute;
	int b;
	int c;
	int hour;
	scanf("%d", &b);
	if(b<=60){
		printf("the minute is %d", b);	
	}
	else{
		while(b<=0)
		{
			hour = b/A;
			c=b%A;
			scanf("%d",&b);	
		}	
	}
	return 0;
 } 
