#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	int max;
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c;
		}
	}
	else{ // a<b
		if(c>b){
			max=c;
		}
		else{  //a<b, c<b
			max=b;
		}
	}
	printf("max=%d", max);
	return 0;
	
}
