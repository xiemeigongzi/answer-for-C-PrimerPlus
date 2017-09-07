#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d", &m,&n);
	int i;
	int ret=0;
	int sum=0;
	int cnt=0;
	if(m==1)
	m=2;
	
	for(i=m;i<=n;i++){
		int isPrime=1;
		int j;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
	}
	if(isPrime==1){
        ret=i;
		cnt++;
		sum=sum+i;
		printf("ret=%d cnt=%d sum=%d\n",ret, cnt,sum);
	}
}
	return 0;}
