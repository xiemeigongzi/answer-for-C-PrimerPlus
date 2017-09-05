#include <stdio.h>
int main()
{
	int type;
	scanf("%d", &type);
	
	switch(type){
		case 1:
			printf("hello!");
		//	break;
		case 1+1:
			printf("morning!");
			break;
		case 3:
			printf("afternoon!");
			break;
		case 4:
			printf("good night!");
			break;
		default:
			printf("Bye!");
			break;
	}
	return 0;
}
