#include <stdio.h>
int main()
{
	int m,n;
		int sum=0;
		int cnt=0;
		int a;
	printf("enter two numbers: m and n (m<n)");
	scanf("%d %d", &m,&n);
	int i;
	for(i=m;i<=n;i++){
		int j;
		int isPrime = 1;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime =0;
			}
		}
		if(isPrime==1){
				a=i;
				sum=sum+a;
				cnt++;
		}
	}
	printf("times=%d sum=%d\n",cnt,sum);
	return 0;
 } 
