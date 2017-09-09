#include <stdio.h>
int main()
{
	int a[100];
	a[0]=2;
	int i;
	int count=1;
	while(count<100){
		for(i=3;i<100;i++){
			int k;
			int ret=1;
			for(k=2;k<i;k++){
				if(i%k==0){
					ret=0;
					break;
				}
			}
			if(ret==1){
				a[count++]=i;// it is important You cannot think of it!!!!!!!!!!
			}
		}
		
	}
	for(i=0;i<100;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
