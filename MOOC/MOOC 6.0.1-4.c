#include <stdio.h>
int main()
{
	int a=12,b=18;
	int i;
	int min;
	int ret;
	if(a>b){
		min=b;
	}
	 else{
	 	min=a;
	 }
	for(i=1;i<=min;i++){
		if(a%i==0){
			if(b%i==0){
				ret=i;
				//printf("%d",ret);
			}
		}
	}
	printf("%d\n",ret);
	return 0;
}
