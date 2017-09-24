#include <stdio.h>
int main()
{
	int a, b, c;
	int max, min;
	printf("input 3 integer numbers:\n");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b){
		max=a;
		if(b>c){
			min=c;
		}
		else{
			min=b;
		}
	}
	else{ //a<b
		min=a;
		if(c>b){
			max=c;
		} 
		else{// a<b c<b
			max=b;
		}
		}

	printf("max = %d, min = %d", max,min);
	return 0;
 } 
