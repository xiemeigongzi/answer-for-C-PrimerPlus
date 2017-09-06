#include <stdio.h>
int main()
{
	int a=12,b=18;
	int ret,min;
	if(a>b){
		min=b;
	}
	else{
		min=a;
	}
	int i=1;
	for(i=1;i<min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
				printf("%d\n",ret);
			}
			printf("%d\n",ret);
		}
//	printf("%d\n",ret);	
	}
//	printf("%d\n",ret);
	return 0;
}
