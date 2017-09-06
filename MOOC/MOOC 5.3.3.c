#include <stdio.h>
int main()
{
	int a=12;
	int b=16;
	//scanf a b
	int i,k;
	int min;
	int ret=0;
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
			//printf("%d\n",i);}
			ret=i;
		}	
		}
		
	}
	printf("%d\n",ret);
		return 0;}
