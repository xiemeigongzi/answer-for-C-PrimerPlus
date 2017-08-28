#include <stdio.h>
int main()
{
	int x=0,f=0;
	scanf("%d", &x);
	if(x>0){
		f=x*2;	}
    else if(x==0){
    	f=0;
	}	
	else{
		f=-1;
	}
	printf("f is %d", f);
	return 0;
} 
