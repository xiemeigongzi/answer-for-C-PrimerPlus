#include <stdio.h>
int main()
{
	int x;
	int one, two , five;
	
	scanf("%d", &x);
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*5;two++){
			for(five=0;five<=x*2;five++){
				if(one+2*two+5*five==10*x){
					printf("%d one+%d two+%d five=x.\n", one, two, five) ;
					break;
				}
			}
		}
	}
	return 0;
}
