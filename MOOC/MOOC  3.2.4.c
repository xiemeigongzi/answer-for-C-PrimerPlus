#include <stdio.h>
int main()
{
	printf("Output the grades:\n");
	int grade=0;
	scanf("%d",&grade);
	int a=grade/10;
	switch(a){
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
		printf("B\n");
			break;
		case 7:
		printf("C\n");
			break;
		case 6:
		printf("D\n");
			break;
		
		default:
			printf("F\n");
		    break;
			}			
	return 0;
}
