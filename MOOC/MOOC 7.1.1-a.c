#include <stdio.h>
int main()
{
	int sum=0;
	int m,n;
	scanf ("%d %d", &m, &n);
	int i;
	int a;
	for(i=m;i<=n;i++)
	{
		int j;
		int isPrime=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		} 
		if(isPrime==1){
			a=i;
			printf("%d\t", a);
			sum=sum+a;
		}
	}
	printf("%d", sum);
		return 0;
}
