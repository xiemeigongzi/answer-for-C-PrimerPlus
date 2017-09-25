#include <stdio.h>
int main()
{
	int i;
	int cnt=0;
	int a[100];
	for(i=1; i<=100;i++){
		int j;
		int isPrime=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			a[cnt++]=i;
			printf("a[%d]=%d\n", cnt,i);
		}
	}
	
	return 0;
}
