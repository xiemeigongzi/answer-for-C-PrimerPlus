#include <stdio.h>
int main()
{
	int a, b,c;
	int max, min;
	
	printf("input three numbers.\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		 } 
		 else{ //a>b  c>a
		 max=c;	
		 }
	}
	else{// a<b
		if(b>c){
			max=b;
		} 
		else{// a<b  b<c
			max=c;
		}
	}
	printf("max=%d",max);
	return 0;
}
