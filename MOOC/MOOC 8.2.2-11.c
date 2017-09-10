#include <stdio.h>
int main()
{
	int i=1;
	int a[100];
	 a[0]=2;
	int cnt=1;
	while(cnt<=100)
	{
		int k;
		int ret=1;
		for(k=2;k<i;k++)
		{
			if(i%k==0){
				ret=0;
				break;
			}
		}
		if(ret==1){
			a[cnt++]=i;
			printf("%d\t",i);
		}
		i++;
	}
	for(i=0;i<100;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
	return 0;
}
