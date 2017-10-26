#include <stdio.h>
int main()
{
	int x=100;
	int one, two, five;
	
	for(one=1;one<100;one++){
		for(two=1;two<50;two++){
			for(five=1;five<20;five++){
				if(1*one+2*two+5*five==100){
					printf("%d one + %d two + %d five= 100\n",one, two, five);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}
