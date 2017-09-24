#include <stdio.h>
int main()
{
	int a, b,c;
	int  min;
	
	printf("input three numbers.\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b)
	{
		if(c>a){
			min=a;
		}
		else{ //  a<b c<a 
			min=c;
		}
	}
	else{// a>b
		if(b>c){
			min=c;
		}
		else{// a>b b<c
			min=b;
		}
	}
	
	printf("min=%d",min);
	return 0;
}
